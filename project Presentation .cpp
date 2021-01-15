#include <iostream>
using namespace std;
int drink ()
{
	againd :
	system("CLS");
	cout<<"\t \t  Press crossponding number to select "<<endl;
	cout<<"\t \t \t 1. Tea"<<endl;
	cout<<"\t \t \t 2. Coffee "<<endl;
	cout<<"\t \t \t 3. Iced drink"<<endl;
	cout<<"\t \t \t 4. Clod drink"<<endl;
	cout<<"\t \t \t 5. Milk-Shakes and Fresh juice "<<endl;
	cout<<"\t \t \t 0. Exit"<<endl;
	int a; 
	cin>>a;
	if(a >= 0 &&  a <=5)
	{
		return a;
	}
	else 
	{
		cout<<"You have to select from only given option let's try this again ";
		system("pause");
		goto againd;
	}
}
int tea ()
{
	againt :
	system("CLS");
	cout<<"\t \t  Press crossponding number to select "<<endl;
	cout<<"\t \t \t  Items       \t Price"<<endl;
	cout<<"\t \t \t 1. Black tea    \t 50"<<endl;
	cout<<"\t \t \t 2. Green tea    \t 70 "<<endl;
	cout<<"\t \t \t 3. Ginger tea   \t 80"<<endl;
	cout<<"\t \t \t 4. Herbal tea   \t 70"<<endl;
	cout<<"\t \t \t 5. White tea    \t 70"<<endl;
	cout<<"\t \t \t 6. Dark tea     \t 70"<<endl;
	cout<<"\t \t \t 7. Massala chai \t 80"<<endl;
	cout<<"\t \t \t 0. Exit"<<endl;
	int a; 
	cin>>a;
	if(a >= 0 &&  a <= 7)
	{
		if (a == 1)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((1*100) + n);
		}
		else if (a == 2)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((2*100) + n);
		}
		else if (a == 3)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((3*100) + n);
		}
		else if (a == 4)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((4*100) + n);
		}
		else if (a == 5)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((5*100) + n);
		}
		else if (a == 6)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((6*100) + n);
		}
		else if (a == 7)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((7*100) + n);
		}
		else 
		{
			return 0;
		}
	}
	else 
	{
		cout<<"You have to select from only given option let's try this again ";
		system("pause");
		goto againt;
	}
}
int coffee ()
{
	againt :
	system("CLS");
	cout<<"\t \t  Press crossponding number to select "<<endl;
	cout<<"\t \t \t  Items         \t Price"<<endl;
	cout<<"\t \t \t 1. Latte          \t 200 "<<endl;
	cout<<"\t \t \t 2. Dirty chal     \t 200"<<endl;
	cout<<"\t \t \t 3. Irish coffee   \t 180"<<endl;
	cout<<"\t \t \t 4. Cpppucion (Rg) \t 200 "<<endl;
	cout<<"\t \t \t 5. Cpppucion (Lg) \t 350"<<endl;
	cout<<"\t \t \t 6. Flat white     \t 250"<<endl;
	cout<<"\t \t \t 7. Tumeric Latte  \t 200"<<endl;
	cout<<"\t \t \t 0. Exit"<<endl;
	int a; 
	cin>>a;
	if(a >= 0 &&  a <= 7)
	{
		if (a == 1)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((8*100) + n);
		}
		else if (a == 2)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((9*100) + n);
		}
		else if (a == 3)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((10*100) + n);
		}
		else if (a == 4)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((11*100) + n);
		}
		else if (a == 5)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((12*100) + n);
		}
		else if (a == 6)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((13*100) + n);
		}
		else if (a == 7)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((14*100) + n);
		}
		else 
		{
			return 0;
		}
	}
	else 
	{
		cout<<"You have to select from only given option let's try this again ";
		system("pause");
		goto againt;
	}
}
int icedd ()
{
	againt :
	system("CLS");
	cout<<"\t \t  Press crossponding number to select "<<endl;
	cout<<"\t \t \t  Items           \t Price"<<endl;
	cout<<"\t \t \t 1. Iced Chocolate   \t 250"<<endl;
	cout<<"\t \t \t 2. Iced Latte       \t 250"<<endl;
	cout<<"\t \t \t 3. Iced tea         \t 300"<<endl;
	cout<<"\t \t \t 4. Iced Caramel     \t 280"<<endl;
	cout<<"\t \t \t 5. Cold brew coffee \t 400"<<endl;
	cout<<"\t \t \t 6. Iced mocha       \t 200"<<endl;
	cout<<"\t \t \t 0. Exit"<<endl;
	int a; 
	cin>>a;
	if(a >= 0 &&  a <= 6)
	{
		if (a == 1)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((15*100) + n);
		}
		else if (a == 2)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((16*100) + n);
		}
		else if (a == 3)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((17*100) + n);
		}
		else if (a == 4)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((18*100) + n);
		}
		else if (a == 5)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((19*100) + n);
		}
		else if (a == 6)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((20*100) + n);
		}
		else 
		{
			return 0;
		}
	}
	else 
	{
		cout<<"You have to select from only given option let's try this again ";
		system("pause");
		goto againt;
	}
}
int coldd ()
{
	againt :
	system("CLS");
	cout<<"\t \t  Press crossponding number to select "<<endl;
	cout<<"\t \t \t  Items                \t Price"<<endl;
	cout<<"\t \t \t 1.  Coca Cola (can)        \t 40"<<endl;
	cout<<"\t \t \t 2.  Coca Cola (0.5 L)      \t 60"<<endl;
	cout<<"\t \t \t 3.  Pepsi (can)            \t 40"<<endl;
	cout<<"\t \t \t 4.  Pepsi (0.5 L)          \t 60"<<endl;
	cout<<"\t \t \t 5.  Mirinda (can)          \t 35"<<endl;
	cout<<"\t \t \t 6.  Mirinda (0.5 L)        \t 50"<<endl;
	cout<<"\t \t \t 7.  Fanta (can)            \t 40"<<endl;
	cout<<"\t \t \t 8.  Fanta (0.5 L)          \t 60"<<endl;
	cout<<"\t \t \t 9.  String Red (can)       \t 40"<<endl;
	cout<<"\t \t \t 10. String Red (0.5 L)    \t 60"<<endl;
	cout<<"\t \t \t 11. Pakola Lychee (can)   \t 40"<<endl;
    cout<<"\t \t \t 12. Pakola Lychee (0.5 L) \t 60"<<endl;
	cout<<"\t \t \t 0.  Exit"<<endl;
	int a; 
	cin>>a;
	if(a >= 0 &&  a <= 12)
	{
		if (a == 1)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((21*100) + n);
		}
		else if (a == 2)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((22*100) + n);
		}
		else if (a == 3)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((23*100) + n);
		}
		else if (a == 4)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((24*100) + n);
		}
		else if (a == 5)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((25*100) + n);
		}
		else if (a == 6)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((26*100) + n);
		}
		else if (a == 7)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((27*100) + n);
		}
		else if (a == 8)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((28*100) + n);
		}
		else if (a == 9)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((29*100) + n);
		}
		else if (a == 10)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((30*100) + n);
		}		
		else if (a == 11)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((31*100) + n);
		}
		else if (a == 12)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((32*100) + n);
		}
		else 
		{
			return 0;
		}
	}
	else 
	{
		cout<<"You have to select from only given option let's try this again ";
		system("pause");
		goto againt;
	}
}
int milkj ()
{
	againt :
	system("CLS");
	cout<<"\t \t  Press crossponding number to select "<<endl;
	cout<<"\t \t \t  Items             \t Price"<<endl;
	cout<<"\t \t \t 1.  Strawberry shake  \t 150"<<endl;
	cout<<"\t \t \t 2.  Banana shake      \t 100"<<endl;
	cout<<"\t \t \t 3.  Mango shake       \t 100"<<endl;
	cout<<"\t \t \t 4.  Oreo shake        \t 150"<<endl;
	cout<<"\t \t \t 5.  Chocolate shake   \t 150"<<endl;
	cout<<"\t \t \t 6.  Almond milk       \t 200"<<endl;
	cout<<"\t \t \t 7.  Apple juice       \t 100"<<endl;
	cout<<"\t \t \t 8.  Pineapple juice   \t 100"<<endl;
	cout<<"\t \t \t 9.  Carrot juice      \t 80"<<endl;
	cout<<"\t \t \t 10. Cucumber juice    \t 80"<<endl;
	cout<<"\t \t \t 11. Orange juice      \t 100"<<endl;
    cout<<"\t \t \t 12. Mixed fruit juice \t 200"<<endl;
	cout<<"\t \t \t 0.  Exit"<<endl;
	int a; 
	cin>>a;
	if(a >= 0 &&  a <= 12)
	{
		if (a == 1)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((33*100) + n);
		}
		else if (a == 2)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((34*100) + n);
		}
		else if (a == 3)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((35*100) + n);
		}
		else if (a == 4)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((36*100) + n);
		}
		else if (a == 5)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((37*100) + n);
		}
		else if (a == 6)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((38*100) + n);
		}
		else if (a == 7)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((39*100) + n);
		}
		else if (a == 8)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((40*100) + n);
		}
		else if (a == 9)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((41*100) + n);
		}
		else if (a == 10)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((42*100) + n);
		}		
		else if (a == 11)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((43*100) + n);
		}
		else if (a == 12)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((44*100) + n);
		}
		else 
		{
			return 0;
		}
	}
	else 
	{
		cout<<"You have to select from only given option let's try this again ";
		system("pause");
		goto againt;
	}
}
int snack ()
{
	agains :
	system("CLS");
	cout<<"\t \t  Press crossponding number to select "<<endl;
	cout<<"\t \t \t 1. Cookies"<<endl;
	cout<<"\t \t \t 2. Potato chips"<<endl;
	cout<<"\t \t \t 3. Cakes "<<endl;
	cout<<"\t \t \t 4. Fast food"<<endl;
	cout<<"\t \t \t 0. Exit"<<endl;
	int a;
	cin>>a;
	if(a >= 0 && a <=4)
	{
		return a;
	}
	else 
	{
		cout<<"You have to select from only given option let's try this again ";
		system("pause");
		goto agains;
	}
}
int cookies ()
{
	againt :
	system("CLS");
	cout<<"\t \t  Press crossponding number to select "<<endl;
	cout<<"\t \t \t  Items                    	     \t Price"<<endl;
	cout<<"\t \t \t 1. Chocolate cookies   (pack)    \t 160"<<endl;
	cout<<"\t \t \t 2. Almond biscuits     (pack)    \t 160"<<endl;
	cout<<"\t \t \t 3. Butter cookies      (pack)	 \t 160"<<endl;
	cout<<"\t \t \t 4. Nan Khatai biscuits (pack)    \t 200"<<endl;
	cout<<"\t \t \t 5. Zeera biscuits      (pack)    \t 160"<<endl;
	cout<<"\t \t \t 6. Coconut biscuits    (pack)    \t 180"<<endl;
	cout<<"\t \t \t 7. Tuc slat biscuits   (pack)    \t 40"<<endl;
	cout<<"\t \t \t 8. Oreo biscuits       (pack)    \t 120"<<endl;
	cout<<"\t \t \t 9. Candi biscuits      (pack)    \t 110"<<endl;
	cout<<"\t \t \t 0. Exit"<<endl;
	int a;
	cin>>a;
	if(a >= 0 &&  a <= 9)
	{
		if (a == 1)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((45*100) + n);
		}
		else if (a == 2)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((46*100) + n);
		}
		else if (a == 3)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((47*100) + n);
		}
		else if (a == 4)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((48*100) + n);
		}
		else if (a == 5)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((49*100) + n);
		}
		else if (a == 6)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((50*100) + n);
		}
		else if (a == 7)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((51*100) + n);
	    }
		else if (a == 8)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((52*100) + n);
		}
		else if (a == 9)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((53*100) + n);
		}
		else 
		{
			return 0;
		}
	}
	else 
	{
		cout<<"You have to select from only given option let's try this again ";
		system("pause");
		goto againt;
	}
}
int patato_chips ()
{
	againt :
	system("CLS");
	cout<<"\t \t  Press crossponding number to select "<<endl;
	cout<<"\t \t \t  Items                     \t Price"<<endl;
	cout<<"\t \t \t 1.  Lays Yog & Hreb    (Reg)  \t 10"<<endl;
	cout<<"\t \t \t 2.  Lays Yog & Hreb    (Lg)   \t 50"<<endl;
	cout<<"\t \t \t 3.  Lays French Cheese (Reg)  \t 10"<<endl;
	cout<<"\t \t \t 4.  Lays French Cheese (Lg)   \t 50"<<endl;
	cout<<"\t \t \t 5.  Lays Kurkure chips (Reg)  \t 10"<<endl;
	cout<<"\t \t \t 6.  Lays Kurkure chips (Lg)   \t 50"<<endl;
	cout<<"\t \t \t 7.  Lays Classic chips (Reg)  \t 10"<<endl;
	cout<<"\t \t \t 8.  Lays Classic chips (Lg)   \t 50"<<endl;
	cout<<"\t \t \t 9.  Lays Wavys chips   (Reg)  \t 10"<<endl;
	cout<<"\t \t \t 10. Lays Wavys chips   (Lg)   \t 50"<<endl;
	cout<<"\t \t \t 0.  Exit"<<endl;
	int a; 
	cin>>a;
	if(a >= 0 &&  a <= 10)
	{
		if (a == 1)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((54*100) + n);
		}
		else if (a == 2)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((55*100) + n);
		}
		else if (a == 3)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((56*100) + n);
		}
		else if (a == 4)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((57*100) + n);
		}
		else if (a == 5)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((58*100) + n);
		}
		else if (a == 6)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((59*100) + n);
		}
		else if (a == 7)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((60*100) + n);
		}
		else if (a == 8)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((61*100) + n);
		}
		else if (a == 9)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((62*100) + n);
		}
		else if (a == 10)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((63*100) + n);
		}
		else 
		{
			return 0;
		}
	}
	else 
	{
		cout<<"You have to select from only given option let's try this again ";
		system("pause");
		goto againt;
	}
}
int cake ()
{
	againt :
	system("CLS");
	cout<<"\t \t  Press crossponding number to select "<<endl;
	cout<<"\t \t \t  Items                         \t Price"<<endl;
	cout<<"\t \t \t 1.  Cream cake             (1p)  \t 600"<<endl;
	cout<<"\t \t \t 2.  Cream cake             (2p)  \t 1100"<<endl;
	cout<<"\t \t \t 3.  Fruit Rifel            (1p)  \t 600"<<endl;
	cout<<"\t \t \t 4.  Fruit Rifel            (2p)  \t 1100"<<endl;
	cout<<"\t \t \t 5.  Chocolate cake         (1p)  \t 500"<<endl;
	cout<<"\t \t \t 6.  Chocolate cake         (2p)  \t 1000"<<endl;
	cout<<"\t \t \t 7.  Chocolate + Cream cake (1p)  \t 600"<<endl;
	cout<<"\t \t \t 8.  Chocolate + Cream cake (2p)  \t 1200"<<endl;
	cout<<"\t \t \t 9.  Tutti Fruiti           (1p)  \t 600"<<endl;
	cout<<"\t \t \t 10. Tutti Fruiti           (2p)  \t 1100"<<endl;
	cout<<"\t \t \t 11. Pineapple cake         (1p)  \t 600"<<endl;
    cout<<"\t \t \t 12. Pineapple cake         (2p)  \t 1200"<<endl;
	cout<<"\t \t \t 0.  Exit"<<endl;
	int a; 
	cin>>a;
	if(a >= 0 &&  a <= 12)
	{
		if (a == 1)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((64*100) + n);
		}
		else if (a == 2)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((65*100) + n);
		}
		else if (a == 3)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((66*100) + n);
		}
		else if (a == 4)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((67*100) + n);
		}
		else if (a == 5)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((68*100) + n);
		}
		else if (a == 6)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((69*100) + n);
		}
		else if (a == 7)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((70*100) + n);
		}
		else if (a == 8)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((71*100) + n);
		}
		else if (a == 9)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((72*100) + n);
		}
		else if (a == 10)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((73*100) + n);
		}		
		else if (a == 11)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((74*100) + n);
		}
		else if (a == 12)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((75*100) + n);
		}
		else 
		{
			return 0;
		}
	}
	else 
	{
		cout<<"You have to select from only given option let's try this again ";
		system("pause");
		goto againt;
	}
}
int fast_food ()
{
	againt :
	system("CLS");
	cout<<"\t \t  Press crossponding number to select "<<endl;
	cout<<"\t \t \t  Items                      \t Price"<<endl;
	cout<<"\t \t \t 1.  Chicken burger            \t 120"<<endl;
	cout<<"\t \t \t 2.  Chicken burger (Cheese)   \t 150"<<endl;
	cout<<"\t \t \t 3.  Zinger burger             \t 190"<<endl;
	cout<<"\t \t \t 4.  Chapli burger             \t 200"<<endl;
	cout<<"\t \t \t 5.  Fajita pizza (Small)      \t 300"<<endl;
	cout<<"\t \t \t 6.  Fajita pizza (Medium)     \t 550"<<endl;
	cout<<"\t \t \t 7.  Fajita pizza (Large)      \t 900"<<endl;
	cout<<"\t \t \t 8.  Prpperoni pizza (Small)   \t 300"<<endl;
	cout<<"\t \t \t 9.  Prpperoni pizza (Medium)  \t 600"<<endl;
	cout<<"\t \t \t 10. Prpperoni pizza (Large)   \t 950"<<endl;
	cout<<"\t \t \t 11. Vegetraian pizza (Small)  \t 300"<<endl;
	cout<<"\t \t \t 12. Vegetraian pizza (Medium) \t 550"<<endl;
	cout<<"\t \t \t 13. Vegetraian pizza (Large)  \t 900"<<endl;
	cout<<"\t \t \t 14. club Sandwhich            \t 200"<<endl;
	cout<<"\t \t \t 15. Open face Sandwhich       \t 150"<<endl;
	cout<<"\t \t \t 16. Chicken patty Sandwhich   \t 250"<<endl;
	cout<<"\t \t \t 0.  Exit"<<endl;
	int a; 
	cin>>a;
	if(a >= 0 &&  a <= 16)
	{
		if (a == 1)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((76*100) + n);
		}
		else if (a == 2)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((77*100) + n);
		}
		else if (a == 3)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((78*100) + n);
		}
		else if (a == 4)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((79*100) + n);
		}
		else if (a == 5)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((80*100) + n);
		}
		else if (a == 6)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((81*100) + n);
		}
		else if (a == 7)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((82*100) + n);
		}
		else if (a == 8)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((83*100) + n);
		}
		else if (a == 9)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((84*100) + n);
		}
		else if (a == 10)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((85*100) + n);
		}
		else if (a == 11)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((86*100) + n);
		}
		else if (a == 12)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((87*100) + n);
		}
		else if (a == 13)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((88*100) + n);
		}
		else if (a == 14)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((89*100) + n);
		}
		else if (a == 15)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((90*100) + n);
		}
		else if (a == 16)
		{
			cout<<"Enter how many : ";
			int n;
			cin>>n;
			return ((91*100) + n);
		}
		else 
		{
			return 0;
		}
	}
	else 
	{
		cout<<"You have to select from only given option let's try this again ";
		system("pause");
		goto againt;
	}
}
int bill_user (int a , int b )
{
	int number ;
	int deal;
	deal = a / 100;
	number = a % 100;
	if ( deal == 1)
	{
		int gosum = number * 50;
		cout<<" \t"<<b+1<<"|Black Tea                         "<<number<<"       "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 2)
	{
		int gosum = number * 70;
		cout<<" \t"<<b+1<<"|Green Tea                         "<<number<<"       "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 3)
	{
		int gosum = number * 80;
		cout<<" \t"<<b+1<<"|Ginger Tea                        "<<number<<"       "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 4)
	{
		int gosum = number * 70;
		cout<<" \t"<<b+1<<"|Herbal Tea                        "<<number<<"       "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 5)
	{
		int gosum = number * 70;
		cout<<" \t"<<b+1<<"|White Tea  	                     " <<number<<"       "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 6)
	{
		int gosum = number * 70;
		cout<<" \t"<<b+1<<"|Dark Tea                         " <<number<<"       "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 7)
	{
		int gosum = number * 80;
		cout<<" \t"<<b+1<<"|Massla Chai                      " <<number<<"       "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 8)
	{
		int gosum = number * 200;
		cout<<" \t"<<b+1<<"|Latte 	                    " <<number<<"       "<<gosum<<endl;
		return gosum;
	}
	
	else if ( deal == 9)
	{
		int gosum = number * 200;
		cout<<" \t"<<b+1<<"|Dirty Chal                       " <<number<<"       "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 10)
	{
		int gosum = number * 180;
		cout<<" \t"<<b+1<<"|Irish Coffee                     " <<number<<"       "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 11)
	{
		int gosum = number * 200;
		cout<<" \t"<<b+1<<"|Cappcuino (Reg)                  " <<number<<"       "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 12)
	{
		int gosum = number * 350;
		cout<<" \t"<<b+1<<"|Cappcuino (Lg)                   " <<number<<"       "<<gosum<<endl;
		return gosum; 
	}
	else if ( deal == 13)
	{
		int gosum = number * 250;
		cout<<" \t"<<b+1<<"|Flat White                       " <<number<<"       "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 14)
	{
		int gosum = number * 200;
		cout<<" \t"<<b+1<<"|Tumeric latte                    " <<number<<"       "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 15)
	{
		int gosum = number * 250;
		cout<<" \t"<<b+1<<"|Iced Chocolate                   " <<number<<"       "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 16)
	{
		int gosum = number * 250;
		cout<<" \t"<<b+1<<"|Iced latte                       " <<number<<"       "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 17)
	{
		int gosum = number * 300;
		cout<<" \t"<<b+1<<"|Iced Tea                         " <<number<<"       "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 18)
	{
		int gosum = number * 280;
		cout<<" \t"<<b+1<<"|Iced caramel                     " <<number<<"       "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 19)
	{
	int gosum = number * 400;
		cout<<" \t"<<b+1<<"|Cold brew coffee	             " <<number<<"       "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 20)
	{
		int gosum = number * 200;
		cout<<" \t"<<b+1<<"|Iced mocha                       " <<number<<"       "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 21)
	{
		int gosum = number * 40;
		cout<<" \t"<<b+1<<"|Coca cola (can)                  " <<number<<"       "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 22)
	{
		int gosum = number * 60;
		cout<<" \t"<<b+1<<"|Coca cola (0.5 l)                " <<number<<"       "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 23)
	{
		int gosum = number * 40;
		cout<<" \t"<<b+1<<"|Pepsi cola (Can)                 " <<number<<"       "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 24)
	{
		int gosum = number * 60;
		cout<<" \t"<<b+1<<"|Pepsi cola (0.5 L)               " <<number<<"       "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 25)
	{
		int gosum = number * 35;
		cout<<" \t"<<b+1<<"|Mirinda (can)                    " <<number<<"       "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 26)
	{
		int gosum = number * 50;
		cout<<" \t"<<b+1<<"|Mirinda (0.5 L)                  " <<number<<"       "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 27)
	{
		int gosum = number * 40;
		cout<<" \t"<<b+1<<"|Fanta (can)                      " <<number<<"       "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 28)
	{
		int gosum = number * 60;
		cout<<" \t"<<b+1<<"|Fanta (0.5 L)                    " <<number<<"       "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 29)
	{
		int gosum = number * 40;
		cout<<" \t"<<b+1<<"|String (can)                     " <<number<<"       "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 30)
	{
		int gosum = number * 60;
		cout<<" \t"<<b+1<<"|String (0.5 L)                  " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 31)
	{
		int gosum = number * 40;
		cout<<" \t"<<b+1<<"|Pakola lychee (can)             " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 32)
	{
		int gosum = number * 60;
		cout<<" \t"<<b+1<<"|Pakola lychee (0.5 L)           " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 33)
	{
		int gosum = number * 150;
		cout<<" \t"<<b+1<<"|Strawberry Shake   	            " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 34)
	{
		int gosum = number * 100;
		cout<<" \t"<<b+1<<"|Banana shake                    " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 35)
	{
		int gosum = number * 100;
		cout<<" \t"<<b+1<<"|Mango shake                     " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 36)
	{
		int gosum = number * 150;
		cout<<" \t"<<b+1<<"|Oreo shake                      " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 37)
	{
		int gosum = number * 150;
		cout<<" \t"<<b+1<<"|Chocolate shake                 " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 38)
	{
		int gosum = number * 200;
		cout<<" \t"<<b+1<<"|Almond milk                     " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 39)
	{
		int gosum = number * 100;
		cout<<" \t"<<b+1<<"|Apple juice                     " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 40)
	{
		int gosum = number * 100;
		cout<<" \t"<<b+1<<"|Pineapple juice                 " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 41)
	{
		int gosum = number * 80;
		cout<<" \t"<<b+1<<"|Carrot juice                    " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 42)
	{
		int gosum = number * 80;
		cout<<" \t"<<b+1<<"|Cumcumber juice                 " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 43)
	{
		int gosum = number * 100;
		cout<<" \t"<<b+1<<"|Orange juice                    " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 44)
	{
		int gosum = number * 200;
		cout<<" \t"<<b+1<<"|Mixed fruit juice               " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 45)
	{
		int gosum = number * 160;
		cout<<" \t"<<b+1<<"|Chocloate cookies (pack)        " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 46)
	{
		int gosum = number * 160;
		cout<<" \t"<<b+1<<"|Almond biscuits (pack)          " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 47)
	{
		int gosum = number * 160;
		cout<<" \t"<<b+1<<"|Butter biscuits (pack)          " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 48)
	{
		int gosum = number * 200;
		cout<<" \t"<<b+1<<"|NanKahtai biscuit (pack)        " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 49)
	{
		int gosum = number * 160;
		cout<<" \t"<<b+1<<"|Zeera biscuit (pack)            " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 50)
	{
		int gosum = number * 180;
		cout<<" \t"<<b+1<<"|Coconut biscuit(pack)           " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 51)
	{
		int gosum = number * 40;
		cout<<" \t"<<b+1<<"|Tuc biscuit (Pack)              " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 52)
	{
		int gosum = number * 120;
		cout<<" \t"<<b+1<<"|Oreo biscuit (pack)             " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 53)
	{
		int gosum = number * 110;
		cout<<" \t"<<b+1<<"|Candi biscuit (pack)            " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 54)
	{
		int gosum = number * 10;
		cout<<" \t"<<b+1<<"|Lays yog & Herb (Rg)            " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 55)
	{
		int gosum = number * 50;
		cout<<" \t"<<b+1<<"|Lay yog & herb (Lg)             " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 56)
	{
		int gosum = number * 10;
		cout<<" \t"<<b+1<<"|Lays French cheese (Rg)         " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 57)
	{
		int gosum = number * 50;
		cout<<" \t"<<b+1<<"|Lay French cheese (Lg)          " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 58)
	{
		int gosum = number * 10;
		cout<<" \t"<<b+1<<"|Lays Kurkure chips (Rg)         " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 59)
	{
		int gosum = number * 50;
		cout<<" \t"<<b+1<<"|Lay Kurkure chips  (Lg)         " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 60)
	{
		int gosum = number * 10;
		cout<<" \t"<<b+1<<"|Lays classic chips (Rg)         " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 61)
	{
		int gosum = number * 50;
		cout<<" \t"<<b+1<<"|Lay classic chips (Lg)          " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 62)
	{
		int gosum = number * 10;
		cout<<" \t"<<b+1<<"|Lays wavys chips (Rg)           " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 63)
	{
		int gosum = number * 50;
		cout<<" \t"<<b+1<<"|Lay wavys chips  (Lg)           " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 64)
	{
		int gosum = number * 600;
		cout<<" \t"<<b+1<<"|Ice cream cake   (1)            " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 65)
	{
		int gosum = number * 1100;
		cout<<" \t"<<b+1<<"|Ice cream cake   (2)            " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 66)
	{
		int gosum = number * 600;
		cout<<" \t"<<b+1<<"|fruit rifel cake   (1)          " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 67)
	{
		int gosum = number * 1100;
		cout<<" \t"<<b+1<<"|fruit rifel cake  (2)           " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 68)
	{
		int gosum = number * 500;
		cout<<" \t"<<b+1<<"|Chocolate cake   (1)            " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 69)
	{
		int gosum = number * 1000;
		cout<<" \t"<<b+1<<"|Chocolate cake   (2)            " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 70)
	{
		int gosum = number * 600;
		cout<<" \t"<<b+1<<"|Chocolate cream cake (1)        " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 71)
	{
		int gosum = number * 1200;
		cout<<" \t"<<b+1<<"|Chocolate cream cake (1)        " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 72)
	{
		int gosum = number * 600;
		cout<<" \t"<<b+1<<"|Tutti fruiti cake (1)           " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 73)
	{
		int gosum = number * 1100;
		cout<<" \t"<<b+1<<"|Tutti fruiti cake (2)           " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 74)
	{
		int gosum = number * 600;
		cout<<" \t"<<b+1<<"|Pineapple  cake (1)             " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 75)
	{
		int gosum = number * 1200;
		cout<<" \t"<<b+1<<"|Pineapple cake (2)              " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	
	else if ( deal == 76)
	{
		int gosum = number * 120;
		cout<<""<<b+1<<"\t |Chicken burge                   " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 77)
	{
		int gosum = number * 150;
		cout<<" \t"<<b+1<<"|Chicken burger  (cheese)        " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 78)
	{
		int gosum = number * 190;
		cout<<" \t"<<b+1<<"|Zinger burger                   " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 79)
	{
		int gosum = number * 200;
		cout<<" \t"<<b+1<<"|Chapli kabab burger             " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 80)
	{
		int gosum = number * 300;
		cout<<" \t"<<b+1<<"|Fajita pizza (small)            " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 81)
	{
		int gosum = number * 550;
		cout<<" \t"<<b+1<<"|Fajita pizza (medium)           " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 82)
	{
		int gosum = number * 900;
		cout<<" \t"<<b+1<<"|Fajita pizza (large)            " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 83)
	{
		int gosum = number * 300;
		cout<<" \t"<<b+1<<"|Pepperoni  pizza (small)        " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 84)
	{
		int gosum = number * 600;
		cout<<" \t"<<b+1<<"|Pepperoni pizza (medium)        " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 85)
	{
		int gosum = number * 950;
		cout<<" \t"<<b+1<<"|Pepperoni pizza (large)         " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 86)
	{
		int gosum = number * 300;
		cout<<" \t"<<b+1<<"|Vegetraian pizza (small)        " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 87)
	{
		int gosum = number * 550;
		cout<<" \t"<<b+1<<"|Vegetraian pizza (medium)       " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 88)
	{
		int gosum = number * 900;
		cout<<" \t"<<b+1<<"|Vegetraian pizza (large)        " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 89)
	{
		int gosum = number * 200;
		cout<<" \t"<<b+1<<"|Club sandwhich                  " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 90)
	{
		int gosum = number * 150;
		cout<<" \t"<<b+1<<"|Open face sandwhich             " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	else if ( deal == 91)
	{
		int gosum = number * 250;
		cout<<" \t"<<b+1<<"|Chicken patty sandwhich         " <<number<<"        "<<gosum<<endl;
		return gosum;
	}
	
	
	
}
int main()
{
	system("color 2");
	int bill[100];
	int count = 0;
	again_start:
	system("CLS");
	cout<<"\t \t \t \t Welcome to Avalon cafe center (-.-)"<<endl;
	cout<<"\t \t  Place that provide you food and drinks like homemade"<<endl;
	again_main:
	cout<<"\t \t \t Press the crossponding number to select, we have : "<<endl;
	cout<<"\t \t \t \t 1. Drinks Section "<<endl;
	cout<<"\t \t \t \t 2. Snacks Section"<<endl;
	cout<<"\t \t \t \t 3. Check selected deals"<<endl;
	cout<<"\t \t \t \t 0. Exit / Bill "<<endl;
	int s1;
	cin>>s1;
	if (s1 == 1)
	{
		more_drink:
		int ansd = drink();
		if (ansd == 1)
		{
			again_tea:
			int t;
			t = tea( );
			if (t == 0)
			{
				goto more_drink;
			}
			{
				for (int i = count ; i < count+1 ; i++)
				{
					bill[i] = t;
				}
				count++;
			}
			again_wrong1:
			cout<<"Do you want any other thing form tea section "<<endl;
			cout<<"Press 1 for yes and 0 No"<<endl;
			int anst;
			cin>>anst;
			if (anst == 1)
			{
				goto again_tea;
			}
			else if (anst == 0)
			{
				again_wrong2:
				system("CLS");
				cout<<"Do you want any other thing form Dink section "<<endl;
				cout<<"Press 1 for yes and 0 No"<<endl;
				int ans1;
				cin>>ans1;
				if (ans1 == 1)
				{
					goto more_drink;
				}
				else if (ans1 == 0)
				{
					system("CLS");
					goto again_main;
				}
				else 
				{
					cout<<"You have to select from only given option let's try this again ";
					system("pause");
					goto again_wrong2;
				}
			}
			else 
			{
			cout<<"You have to select from only given option let's try this again ";
			system("pause");
			goto again_wrong1;
			}
				
			}
		else if ( ansd == 2 )
		{
			again_coffee:
			int ansb;
			ansb = coffee();
			if (ansb == 0)
			{
				goto more_drink;
			}
			{
				for (int i = count ; i < count+1 ; i++)
				{
					bill[i] = ansb;
				}
				count++;
			}
			again_wrong10:
			cout<<"Do you want any other thing form coffee section "<<endl;
			cout<<"Press 1 for yes and 0 No"<<endl;
			int anst;
			cin>>anst;
			if (anst == 1)
			{
				goto again_coffee;
			}
			else if (anst == 0)
			{
				again_wrong11:
				system("CLS");
				cout<<"Do you want any other thing form Drink section "<<endl;
				cout<<"Press 1 for yes and 0 No"<<endl;
				int ans1;
				cin>>ans1;
				if (ans1 == 1)
				{
					goto more_drink;
				}
				else if (ans1 == 0)
				{
					system("CLS");
					goto again_main;
				}
				else 
				{
					cout<<"You have to select from only given option let's try this again ";
					system("pause");
					goto again_wrong11;
				}
			}
			else 
			{
			cout<<"You have to select from only given option let's try this again ";
			system("pause");
			goto again_wrong10;
			}
				
		}
		else if (ansd == 3)
		{
			again_iced:
			int ansb;
			ansb = icedd();
			if (ansb == 0)
			{
				goto more_drink;
			}
			{
				for (int i = count ; i < count+1 ; i++)
				{
					bill[i] = ansb;
				}
				count++;
			}
			again_wrong3:
			cout<<"Do you want any other thing form Iced drink section "<<endl;
			cout<<"Press 1 for yes and 0 No"<<endl;
			int anst;
			cin>>anst;
			if (anst == 1)
			{
				goto again_iced;
			}
			else if (anst == 0)
			{
				again_wrong4:
				system("CLS");
				cout<<"Do you want any other thing form Drink section "<<endl;
				cout<<"Press 1 for yes and 0 No"<<endl;
				int ans1;
				cin>>ans1;
				if (ans1 == 1)
				{
					goto more_drink;
				}
				else if (ans1 == 0)
				{
					system("CLS");
					goto again_main;
				}
				else 
				{
					cout<<"You have to select from only given option let's try this again ";
					system("pause");
					goto again_wrong4;
				}
			}
			else 
			{
			cout<<"You have to select from only given option let's try this again ";
			system("pause");
			goto again_wrong3;
			}
				
			}
		
		else if (ansd == 4)
		{
			again_cold:
			int ansb;
			ansb = coldd();
			if (ansb == 0)
			{
				goto more_drink;
			}
			{
				for (int i = count ; i < count+1 ; i++)
				{
					bill[i] = ansb;
				}
				count++;
			}
			again_wrong8:
			cout<<"Do you want any other thing form cold drink section "<<endl;
			cout<<"Press 1 for yes and 0 No"<<endl;
			int anst;
			cin>>anst;
			if (anst == 1)
			{
				goto again_cold;
			}
			else if (anst == 0)
			{
				again_wrong9:
				system("CLS");
				cout<<"Do you want any other thing form Drink section "<<endl;
				cout<<"Press 1 for yes and 0 No"<<endl;
				int ans1;
				cin>>ans1;
				if (ans1 == 1)
				{
					goto more_drink;
				}
				else if (ans1 == 0)
				{
					system("CLS");
					goto again_main;
				}
				else 
				{
					cout<<"You have to select from only given option let's try this again ";
					system("pause");
					goto again_wrong9;
				}
			}
			else 
			{
			cout<<"You have to select from only given option let's try this again ";
			system("pause");
			goto again_wrong8;
			}
				
			}
		
		else if (ansd == 5)
		{
			again_milkj:
			int ansb;
			ansb = milkj( );
			if (ansb == 0)
			{
				goto more_drink;
			}
			{
				for (int i = count ; i < count+1 ; i++)
				{
					bill[i] = ansb;
				}
				count++;
			}
			again_wrong5:
			cout<<"Do you want any other thing form Milk-shakes and fresh juice section "<<endl;
			cout<<"Press 1 for yes and 0 No"<<endl;
			int anst;
			cin>>anst;
			if (anst == 1)
			{
				goto again_milkj;
			}
			else if (anst == 0)
			{
				again_wrong6:
				system("CLS");
				cout<<"Do you want any other thing form Drink section "<<endl;
				cout<<"Press 1 for yes and 0 No"<<endl;
				int ans1;
				cin>>ans1;
				if (ans1 == 1)
				{
					goto more_drink;
				}
				else if (ans1 == 0)
				{
					system("CLS");
					goto again_main;
				}
				else 
				{
					cout<<"You have to select from only given option let's try this again ";
					system("pause");
					goto again_wrong6;
				}
			}
			else 
			{
			cout<<"You have to select from only given option let's try this again ";
			system("pause");
			goto again_wrong5;
			}
				
			}
		
		else
		{
			goto again_start;
		}
 	}
	else if (s1 == 2)
	{
		more_snack:
		int anss;
		anss = snack ();
		if (anss == 1)
		{
			again_cookies:
			int t;
			t = cookies( );
			if (t == 0)
			{
				goto more_snack;
			}
			{
				for (int i = count ; i < count+1 ; i++)
				{
					bill[i] = t;
				}
				count++;
			}
			again_wrongc1:
			cout<<"Do you want any other thing form cookies section "<<endl;
			cout<<"Press 1 for yes and 0 No"<<endl;
			int anst;
			cin>>anst;
			if (anst == 1)
			{
				goto again_cookies;
			}
			else if (anst == 0)
			{
				again_wrongc2:
				system("CLS");
				cout<<"Do you want any other thing form Snack section "<<endl;
				cout<<"Press 1 for yes and 0 No"<<endl;
				int ans1;
				cin>>ans1;
				if (ans1 == 1)
				{
					goto more_snack;
				}
				else if (ans1 == 0)
				{
					system("CLS");
					goto again_main;
				}
				else 
				{
					cout<<"You have to select from only given option let's try this again ";
					system("pause");
					goto again_wrongc2;
				}
			}
			else 
			{
			cout<<"You have to select from only given option let's try this again ";
			system("pause");
			goto again_wrongc1;
			}
				
			
		}
		else if (anss == 2)
		{
			again_patato:
			int t;
			t = patato_chips( );
			if (t == 0)
			{
				goto more_snack;
			}
			{
				for (int i = count ; i < count+1 ; i++)
				{
					bill[i] = t;
				}
				count++;
			}
			again_wrongp1:
			cout<<"Do you want any other thing form patato chips section "<<endl;
			cout<<"Press 1 for yes and 0 No"<<endl;
			int anst;
			cin>>anst;
			if (anst == 1)
			{
				goto again_patato;
			}
			else if (anst == 0)
			{
				again_wrongp2:
				system("CLS");
				cout<<"Do you want any other thing form Snack section "<<endl;
				cout<<"Press 1 for yes and 0 No"<<endl;
				int ans1;
				cin>>ans1;
				if (ans1 == 1)
				{
					goto more_snack;
				}
				else if (ans1 == 0)
				{
					system("CLS");
					goto again_main;
				}
				else 
				{
					cout<<"You have to select from only given option let's try this again ";
					system("pause");
					goto again_wrongp2;
				}
			}
			else 
			{
			cout<<"You have to select from only given option let's try this again ";
			system("pause");
			goto again_wrongp1;
			}
				
			
		}
		else if (anss == 3)
		{
			again_cake:
			int t;
			t = cake( );
			if (t == 0)
			{
				goto more_snack;
			}
			{
				for (int i = count ; i < count+1 ; i++)
				{
					bill[i] = t;
				}
				count++;
			}
			again_wrongc3:
			cout<<"Do you want any other thing form cake section "<<endl;
			cout<<"Press 1 for yes and 0 No"<<endl;
			int anst;
			cin>>anst;
			if (anst == 1)
			{
				goto again_cake;
			}
			else if (anst == 0)
			{
				again_wrongc4:
				system("CLS");
				cout<<"Do you want any other thing form Snack section "<<endl;
				cout<<"Press 1 for yes and 0 No"<<endl;
				int ans1;
				cin>>ans1;
				if (ans1 == 1)
				{
					goto more_snack;
				}
				else if (ans1 == 0)
				{
					system("CLS");
					goto again_main;
				}
				else 
				{
					cout<<"You have to select from only given option let's try this again ";
					system("pause");
					goto again_wrongc4;
				}
			}
			else 
			{
			cout<<"You have to select from only given option let's try this again ";
			system("pause");
			goto again_wrongc3;
			}
		
		}
		else if (anss == 4 )
		{
			again_fast:
			int t;
			t = fast_food( );
			if (t == 0)
			{
				goto more_snack;
			}
			{
				for (int i = count ; i < count+1 ; i++)
				{
					bill[i] = t;
				}
				count++;
			}
			again_wrongf1:
			cout<<"Do you want any other thing form fast food section "<<endl;
			cout<<"Press 1 for yes and 0 No"<<endl;
			int anst;
			cin>>anst;
			if (anst == 1)
			{
				goto again_fast;
			}
			else if (anst == 0)
			{
				again_wrongf2:
				system("CLS");
				cout<<"Do you want any other thing form Snack section "<<endl;
				cout<<"Press 1 for yes and 0 No"<<endl;
				int ans1;
				cin>>ans1;
				if (ans1 == 1)
				{
					goto more_snack;
				}
				else if (ans1 == 0)
				{
					system("CLS");
					goto again_main;
				}
				else 
				{
					cout<<"You have to select from only given option let's try this again ";
					system("pause");
					goto again_wrongf2;
				}
			}
			else 
			{
			cout<<"You have to select from only given option let's try this again ";
			system("pause");
			goto again_wrongf1;
			}
		
		}
		else
		{
			goto again_start;
		}
	}
	else if (s1 == 0)
	{
		if (count == 0)
		{
			system("CLS");
			cout<<endl<<endl<<endl;
			cout<<" \t \t\ \t\ Thanks for your visit "<<endl;
			return 0;
		}
		else 
		{
			system ("CLS");
			int sum = 0;
			cout<<"\t \t \t Here is your Bill "<<endl;
			cout<<"\t ======================================================="<<endl;
			cout<<"\t |Items                         |Quantity |	 Price "<<endl;
			cout<<"\t |============================== ========= ============="<<endl;
			for (int i = 0 ; i < count ; i++)
			{
				int num = bill[i];
				sum = sum + bill_user(num , i);
	   		}
			cout<<"\t |====================================================="<<endl;
	   		cout<<"\t  Total                                    \t "<<sum<<endl<<endl<<endl;;
	   		cout<<"\t You have to go to reception and take this bill with you and receive you food, by paying the bill"<<endl;
	    }
	}
	else if (s1 == 3)
	{
		system ("CLS");
			again_remove:
			system("CLS");
			if ( count == 0)
			{
				cout<<"\t You have nothing to cancle so go and select and to do so ";
				system("pause");
				goto again_start;
			}
			again_del:
			system("CLS");
			cout<<"\t \t \t You have selected the follwoing Deals "<<endl;
			cout<<"\t ======================================================="<<endl;
			cout<<"\t |Items                         |Quantity |	 Price "<<endl;
			cout<<"\t |============================== ========= ============="<<endl;
			for (int i = 0 ; i < count ; i++)
			{
				int num = bill[i];
				bill_user(num , i);
	   		}
			cout<<"\t |====================================================="<<endl;
	   		cout<<"\t Do you want to cancel anything Press 1 if not Press 0"<<endl;
	   		int an;
	   		cin>>an;
			if ( an == 1)
			{
				again_ask12:
				cout<<endl;
				cout<<"\t Enter crossponding number to cancel it"<<endl;
				int an2;
				cin>>an2;
				if (an2 >= 1 && an2 <= count)
				{
				for(int i = an2-1 ; i <= count ; i++)
				{
					bill [i] = bill [i+1];
				}
				count--;
				cout<<"Done ";
				system("pause");
				goto again_remove;
				}
				else 
				{
					cout<<"\t Wrong entry ";
					system("pause");
					goto again_ask12;
				}
			}
			else if ( an == 0)
			{
				goto again_start;
			}
			else
			{
				cout<<"You have to select from only given option let's try this again ";
				system("pause");
				goto again_del;
			}
	}
	else 
	{
		cout<<"You have to select from only given option let's try this again ";
		system("pause");
		goto again_start;
	}
	return 0;
}
