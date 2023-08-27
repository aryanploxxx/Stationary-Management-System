#include<iostream>
//used to handle string datatype
#include<cstring>
//used for file handling
#include<fstream>
//will be used for random number generation
#include<ctime>
//used for functions like system("cls") , getch() etc
#include<cstdlib>
#include<conio.h>
#include<windows.h>


using namespace std;


class Catalogue_Display
{
    public:

        //will display the catalogue of available stationary items
        void catalogue();
};

void Catalogue_Display::catalogue()
{
    cout<<"\n\n\n\t\t\t\t\t\t -*-*-*-*-*-*-*-*-* WELCOME TO STATIONERY ORDERING SYSTEM -*-*-*-*-*-*-*-*-*"<<endl;

	cout<<"\n\n\t\t\t\t\t\t                -*-*-*-*-*-*-*-*-*CATALOGUE-*-*-*-*-*-*-*-*-*"<<endl;

	cout<<"\n\n\n\t                                         *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;

	cout<<"\n\n\n\t\t\t\t\t\t ITEM\t\t\t\t\t\t         PRICE\t\t\t"<<endl;

	cout<<"\t\t\t\t\t\t 1) Pen \t\t\t\t\t\t(Rs.80)\t\t\t"<<endl;

	cout<<"\t\t\t\t\t\t 2) Pencil\t\t\t\t\t\t(Rs.20)\t\t\t"<<endl;

	cout<<"\t\t\t\t\t\t 3) Eraser \t\t\t\t\t\t(Rs.10)\t\t\t"<<endl;

	cout<<"\t\t\t\t\t\t 4) Sharpener \t\t\t\t\t\t(Rs.10)\t\t\t"<<endl;

	cout<<"\t\t\t\t\t\t 5) Scale \t\t\t\t\t\t(Rs.50)\t\t\t"<<endl;

	cout<<"\t\t\t\t\t\t 6) Marker \t\t\t\t\t\t(Rs.40)\t\t\t"<<endl;

	cout<<"\t\t\t\t\t\t 7) Stapler \t\t\t\t\t\t(Rs.100)\t\t\t"<<endl;

	cout<<"\t\t\t\t\t\t 8) Highlighter \t\t\t\t\t(Rs.120)\t\t\t"<<endl;

	cout<<"\t\t\t\t\t\t 9) Graph Paper \t\t\t\t\t(Rs.50)\t\t\t"<<endl;

	cout<<"\t\t\t\t\t\t 10) Paper Clip Packets\t\t\t\t\t(Rs.50)\t\t\t"<<endl;

	cout<<"\t\t\t\t\t\t 11) Stencil Obj\t\t\t\t\t(Rs.25)\t\t\t"<<endl;

	cout<<"\t\t\t\t\t\t 12) Registers(120 pages)\t\t\t\t(Rs.150)\t\t\t"<<endl;

	cout<<"\t\t\t\t\t\t 13) Practical File(80 pages)\t\t\t\t(Rs.160)\t\t\t"<<endl;

	cout<<"\t\t\t\t\t\t 14) Cellotape \t\t\t\t\t\t(Rs.75)\t\t\t"<<endl;

	cout<<"\t\t\t\t\t\t 15) Fevicol \t\t\t\t\t\t(Rs.100)\t\t\t"<<endl;

    cout<<"\t\t\t\t\t\t 16) Scissors \t\t\t\t\t\t(Rs.60)\t\t\t"<<endl;

    cout<<"\t\t\t\t\t\t 17) Cutter \t\t\t\t\t\t(Rs.40)\t\t\t"<<endl;

    cout<<"\t\t\t\t\t\t 18) Glitter \t\t\t\t\t\t(Rs.20)\t\t\t"<<endl;

    cout<<"\t\t\t\t\t\t 19) EXIT\t\t\t\t"<<endl;

    cout<<"\n\n\n\t                                         *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;

}

//publically inherited from class one

class Purchase:public Catalogue_Display
{
	protected:
        //private members that can be inherited

        //obj variable will store the quantity of items bought
		int obj=0;

        //ch variable is storing the choice of item
        //ch variable will store yes or no statements for if else loops
        int ch=0;

        //these variables will define the price of our menu items
		int a=0;
		int b=0;
		int c=0;
		int d=0;
		int e=0;
		int f=0;
		int g=0;
		int h=0;
		int i=0;
		int j=0;
		int k=0;
		int l=0;
		int m=0;
		int n=0;
		int o=0;
		int p=0;
		int q=0;
		int r=0;

        // s - for sum of total bill
		int s=0;

        //for taking y/n or yes/no as input
        string y;

        //storing the answer yes or no for the logical flow of program
        //ensures that the user can edit its entered choice
        string ye;

    public:

        //this function stores all order details in a file called total.
        void order_menu()
        {

            //attaches the output stream ofw to output class ofstream
            ofstream ofw;

            //opens total.text in append mode
            ofw.open("total.txt",ios::app);


            //if file object can't be allocated or error in file opening
            if(!ofw)
            {

                cout<<"file can not open"<<endl;

                exit (-1);
            }

            //labels for goto statements
            //label a
            a:
                //label b
                b:
                    //label c
                    c:
                        cout<<"\n\n\tWhat do you want to purchase? (one order at a time): ";

                        cin>>ch;

                        //giving choice whether you want to proceed with the current selected item
                        cout<<"\n\n\tDo you wish to edit? (y/n):";

                        cin>>ye;

                        if(ye=="y" || ye=="Y")
                        {
                            goto b;
                            //reverts back to initial label b and choices are offered again
                        }

                        else
                        //continue with the initial choice
                        {
                        switch(ch) {
                                case 1:
                                    cout<<"\n\n\tHow many pen do you want? : ";
                                    // inputs the number of the particular item which user wants
                                    cin>>obj;
                                    //define the price of the object here price
                                    a=80;
                                    //updates the total bill value
                                    s=s+a*obj;

                                    //cout<<"quantity -"<<obj<<endl;
                                    //writes this content in the file
                                    ofw<<"Your Order - Pen : 80";
                                    ofw<<" \n";

                                    ofw<<"Number of Pen is: "<<obj;
                                    ofw<<"\n";

                                    cout<<"\t\nYour order is successfully saved."<<endl;
                                    break;

                                case 2:
                                    cout<<"\n\n\tHow many Pencil do you want? : ";
                                    // inputs the number of the particular item which user wants
                                    cin>>obj;
                                    //define the price of the object here price
                                    b=20;
                                    //updates the total bill value
                                    s=s+b*obj;

                                    //cout<<"quantity -"<<obj<<endl;

                                    //writes this content in the file
                                    ofw<<"Your Order - Pencil : 20";
                                    ofw<<" \n";

                                    ofw<<"Number of Pencil is: "<<obj;
                                    ofw<<"\n";

                                    cout<<"\t\nYour order is successfully saved."<<endl;
                                    break;

                                case 3:
                                    cout<<"\n\n\tHow many Eraser do you want? :";
                                    // inputs the number of the particular item which user wants
                                    cin>>obj;
                                    //define the price of the object here price
                                    c=10;
                                    //updates the total bill value
                                    s=s+c*obj;

                                    //writes this content in the file
                                    ofw<<"Your order - Eraser : 10";
                                    ofw<<" \n";

                                    ofw<<"Number of Eraser is : "<<obj;
                                    ofw<<"\n";

                                    cout<<"\t\nYour order is successfully saved."<<endl;

                                    break;

                                case 4:
                                    cout<<"\n\n\tHow many Sharpener do you want?: ";
                                    // inputs the number of the particular item which user wants
                                    cin>>obj;
                                    //define the price of the object here price
                                    d=10;
                                    //updates the total bill value
                                    s=s+d*obj;

                                    //writes this content in the file
                                    ofw<<"Your Order - Sharpener : 10";
                                    ofw<<" \n";

                                    ofw<<"Number of Sharpener is : "<<obj;
                                    ofw<<"\n";

                                    cout<<"\t\nYour order is successfully saved."<<endl;

                                    break;

                                case 5:
                                    cout<<"\n\n\tHow many Scale do you want?: ";
                                    // inputs the number of the particular item which user wants
                                    cin>>obj;
                                    //define the price of the object here price
                                    e=50;
                                    //updates the total bill value
                                    s=s+e*obj;

                                    //writes this content in the file
                                    ofw<<"Your Order - Scale : 50";
                                    ofw<<" \n";

                                    ofw<<"Number of Scale is : "<<obj;
                                    ofw<<"\n";

                                    cout<<"\tYour order is successfully saved."<<endl;

                                    break;

                                case 6:
                                    cout<<"\n\n\tHow many Marker do you want?: ";
                                    // inputs the number of the particular item which user wants
                                    cin>>obj;
                                    //define the price of the object here price
                                    f=40;
                                    //updates the total bill value
                                    s=s+f*obj;

                                    //writes this content in the file
                                    ofw<<"Your Order - Marker : 40";
                                    ofw<<"\n ";

                                    ofw<<"Number of Marker is : "<<obj;
                                    ofw<<"\n";

                                    cout<<"\t\nYour order is successfully saved."<<endl;

                                    break;

                                case 7:
                                    cout<<"\n\n\tHow many Stapler do you want?: ";
                                    // inputs the number of the particular item which user wants
                                    cin>>obj;
                                    //define the price of the object here price
                                    g=100;
                                    //updates the total bill value
                                    s=s+g*obj;

                                    //writes this content in the file
                                    ofw<<"Your Order - Stapler : 100";
                                    ofw<<"\n ";

                                    ofw<<"Number of Stapler is : "<<obj;
                                    ofw<<"\n";

                                    cout<<"\t\nYour order is successfully saved."<<endl;

                                    break;

                                case 8:
                                    cout<<"\n\n\tHow many Highlighter do you want?: ";
                                    // inputs the number of the particular item which user wants
                                    cin>>obj;
                                    //define the price of the object here price
                                    h=120;
                                    //updates the total bill value
                                    s=s+h*obj;

                                    //writes this content in the file
                                    ofw<<"Your Order - Highlighter : 120";
                                    ofw<<" \n";

                                    ofw<<"Number of Highlighter is : "<<obj;
                                    ofw<<"\n";

                                    cout<<"\t\nYour order is successfully saved."<<endl;

                                    break;

                                case 9:
                                    cout<<"\n\n\tHow many Graph Paper do you want?: ";
                                    // inputs the number of the particular item which user wants
                                    cin>>obj;
                                    //define the price of the object here price
                                    i=50;
                                    //updates the total bill value
                                    s=s+i*obj;

                                    //writes this content in the file
                                    ofw<<"Your Order - Graph Paper : 50";
                                    ofw<<" \n";

                                    ofw<<"Number of Graph Paper is : "<<obj;
                                    ofw<<"\n";

                                    cout<<"\t\nYour order is successfully saved."<<endl;

                                    break;

                                case 10:
                                    cout<<"\n\n\tHow many Paper Clip Packets do you want?: ";
                                    // inputs the number of the particular item which user wants
                                    cin>>obj;
                                    //define the price of the object here price
                                    j=50;
                                    //updates the total bill value
                                    s=s+j*obj;

                                    //writes this content in the file
                                    ofw<<"Your Order - Paper Clip Packets : 50";
                                    ofw<<" \n";

                                    ofw<<"Number of Paper Clip Packets is : "<<obj;
                                    ofw<<"\n";

                                    cout<<"\t\nYour order is successfully saved."<<endl;

                                    break;

                                case 11:
                                    cout<<"\n\n\tHow many Stencil do you want?: ";
                                    // inputs the number of the particular item which user wants
                                    cin>>obj;
                                    //define the price of the object here price
                                    k=25;
                                    //updates the total bill value
                                    s=s+k*obj;

                                    //writes this content in the file
                                    ofw<<"Your Order - Stencil : 25";
                                    ofw<<" \n";

                                    ofw<<"Number of Stencil is : "<<obj;
                                    ofw<<"\n";

                                    cout<<"\t\nYour order is successfully saved."<<endl;

                                    break;

                                case 12:
                                    cout<<"\n\n\tHow many Registers do you want?: ";
                                    // inputs the number of the particular item which user wants
                                    cin>>obj;
                                    //define the price of the object here price
                                    l=150;
                                    //updates the total bill value
                                    s=s+l*obj;

                                    //writes this content in the file
                                    ofw<<"Your Order - Registers : 150";
                                    ofw<<" \n";

                                    ofw<<"Number of Registers is : "<<obj;
                                    ofw<<"\n";

                                    cout<<"\t\nYour order is successfully saved."<<endl;

                                    break;

                                case 13:
                                    cout<<"\n\n\tHow many Practical Files do you want?: ";
                                    // inputs the number of the particular item which user wants
                                    cin>>obj;
                                    //define the price of the object here price
                                    m=160;
                                    //updates the total bill value
                                    s=s+m*obj;

                                    //writes this content in the file
                                    ofw<<"Your Order -  Practical Files  : 160";
                                    ofw<<" \n";

                                    ofw<<"Number of Practical Files is : "<<obj;
                                    ofw<<"\n";

                                    cout<<"\t\nYour order is successfully saved."<<endl;

                                    break;

                                case 14:
                                    cout<<"\n\n\tHow many Cello-tape do you want?: ";
                                    // inputs the number of the particular item which user wants
                                    cin>>obj;
                                    //define the price of the object here price
                                    n=75;
                                    //updates the total bill value
                                    s=s+n*obj;

                                    //writes this content in the file
                                    ofw<<"Your Order - Cellotape : 75";
                                    ofw<<" \n";

                                    ofw<<"Number of Cellotape is : "<<obj;
                                    ofw<<"\n";

                                    cout<<"\t\nYour order is successfully saved."<<endl;

                                    break;

                                case 15:
                                    cout<<"\n\n\tHow many Fevicol do you want?: ";
                                    // inputs the number of the particular item which user wants
                                    cin>>obj;
                                    //define the price of the object here price
                                    o=100;
                                    //updates the total bill value
                                    s=s+o*obj;

                                    //writes this content in the file
                                    ofw<<"Your Order - Fevicol : 100";
                                    ofw<<"\n ";

                                    ofw<<"Number of Fevicol is : "<<obj;
                                    ofw<<"\n";

                                    cout<<"\t\nYour order is successfully saved."<<endl;

                                    break;

                                case 16:
                                    cout<<"\n\n\tHow many Scissors do you want?: ";
                                    // inputs the number of the particular item which user wants
                                    cin>>obj;
                                    //define the price of the object here price
                                    p=60;
                                    //updates the total bill value
                                    s=s+p*obj;

                                    //writes this content in the file
                                    ofw<<"Your Order - Scissors : 60";
                                    ofw<<"\n ";

                                    ofw<<"Number of Scissors is : "<<obj;
                                    ofw<<"\n";

                                    cout<<"\t\nYour order is successfully saved."<<endl;

                                    break;

                                case 17:
                                    cout<<"\n\n\tHow many Cutters do you want?: ";
                                    // inputs the number of the particular item which user wants
                                    cin>>obj;
                                    //define the price of the object here price
                                    q=40;
                                    //updates the total bill value
                                    s=s+q*obj;

                                    //writes this content in the file
                                    ofw<<"Your Order - Cutters : 40";
                                    ofw<<"\n ";

                                    ofw<<"Number of Cutters is : "<<obj;
                                    ofw<<"\n";

                                    cout<<"\t\nYour order is successfully saved."<<endl;

                                    break;

                                case 18:
                                    cout<<"\n\n\tHow many Glitters do you want?: ";
                                    // inputs the number of the particular item which user wants
                                    cin>>obj;
                                    //define the price of the object here price
                                    r=20;
                                    //updates the total bill value
                                    s=s+r*obj;

                                    //writes this content in the file
                                    ofw<<"Your Order - Glitters : 20";
                                    ofw<<"\n ";

                                    ofw<<"Number of Glitters is : "<<obj;
                                    ofw<<"\n";

                                    cout<<"\t\nYour order is successfully saved."<<endl;

                                    break;

                                case 19:
                                    //prints this line before exiting.
                                    cout<<"\n\n\t\t\t\t\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\t\t\t\t\t\tTHANKYOU FOR USING THIS SOFTWARE\n\t\t\t\t\t\tTHIS SOFTWARE IS PRESENTED BY SHREYA TRIPATHI-ARYAN GUPTA-CHIRAG GUPTA\n\t\t\t\t\t\tIF YOU HAVE ANY SUGGESTIONS/QUERIES REGARDING THIS SOFTWARE-:\n\t\t\t\t\t\tEMAIL US AT:ASC@gmail.com\n\t\t\t\t\t\tOR CONTACT US:983XXXXXXX\n\t\t\t\t\t\tWE WOULD SURELY CONSIDER/RESOLVE IT IN THE NEXT 24 HOURS :)''')"<<endl;

                                    //will wait for the user to press any key to exit the program.
                                    getch();

                                    exit(0);

                                    break;

                                default:
                                    cout<<"\n\n\t\t\t\t\t\t\tPlease enter a valid item number."<<endl;

                                    goto c;

                                    break;
                        }


                        //asks if user wants to place another order
                        cout<<"\n\tDo you want to place another order? (yes/no) :";
                        cin>>y;

                        if(y=="yes" || y=="YES")
                        {
                            goto a;
                            //goes back to label a with same values of s and obj
                            //but obj gets overwritten when inputted on it again.
                            //and value of s is adding again and again in same variable
                        }
                        else
                        {
                                cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :)"<<endl;

                                cout<<"\n\t\t\t\t\t\t\t HAVE A WONDERFUL DAY!!!"<<endl;

                                cout<<"\n\n\t\t\t\t\t\t\tGENERATING BILL "<<endl;
                                
                                cout<<"\t\t\t\t\t\t\t";
                                for(int a=1;a<50;a++)
                                {
                                    Sleep(50);
                                    cout<<".";
                                }

                                cout<<"\n\t\t\t\t\t\t\tBILL GENERATED.\n\n";

                                cout<<"\t\t\t\t\t\t\tTO PRINT PRESS ANY KEY.\n\n";
                                getch();

                                /*
                                for(int a=1;a<5;a++)
                                {
                                    //sleep(500);
                                    //to create a slight delay between the text and the actual display of bill

                                    for(int i=0;i<10;i++) {

                                        //empty for loop , will take some time to execute, which will give us the desired delay effect.
                                        //cout << "...";
                                    }
                                    //cout << "...";
                                }
                                */

                                cout<<"\n\t\t\t\t\t\t\t";
                        }

                        }

        //clears the screen
        system("cls");

        //generated bill interface

        cout << "\n\t\t\t\t\t\t\t *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;

        cout << "\t\t\t\t\t\t\t |            STATIONARY BILL                    |"<<endl;

        cout << "\t\t\t\t\t\t\t *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;

        cout << endl;
        cout << endl;

        // helps in random bill number generation
        srand(time(NULL));


        cout << "\t\t\t\t\t\t\t  Bill No : "<<rand()<<"           Order : "<<rand()<<endl;

        cout << endl;
        cout << endl;
        cout << endl;

        cout << "\t\t\t\t\t\t\t  Cashier:  XYZ"<<endl;
        cout << endl;
        cout<<"\t\t\t\t\t\t\t\t    Your total bill amount is Rs."<<s<<endl;

        //write the total bill values into the file
        // ofw<<"\t\t\t\t\t\t\t ";

        ofw<<"\n\t\t\t\t\t\t\tTotal: "<<s;

        ofw<<"\n\n";

        cout << "\n\t\t\t\t\t\t\t *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;

        cout<<"\n\n\t\t\t\t\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\t\t\t\t\t\tTHANKYOU FOR USING THIS SOFTWARE\n\t\t\t\t\t\tTHIS SOFTWARE IS PRESENTED BY SHREYA TRIPATHI-ARYAN GUPTA-CHIRAG GUPTA\n\t\t\t\t\t\tIF YOU HAVE ANY SUGGESTIONS/QUERIES REGARDING THIS SOFTWARE-:\n\t\t\t\t\t\tEMAIL US AT:ASC@gmail.com\n\t\t\t\t\t\tOR CONTACT US:983XXXXXXX\n\t\t\t\t\t\tWE WOULD SURELY CONSIDER/RESOLVE IT IN THE NEXT 24 HOURS :)''')"<<endl;

        ofw.close();
    }

    void display()
    {

        catalogue();

        order_menu();
    }
};


class Authenticate_User:public Catalogue_Display,public Purchase
{
	public:
		void authenticate()
        {
      		//for user id of administrator
      		cout<<"\n\n\n\t\t\t\t\t\t -*-*-*-*-*-*-*-*-* WELCOME ADMINISTRATOR -*-*-*-*-*-*-*-*-*"<<endl;

			d:
                string name;
			    string userId;
                
                //cout<<"---------------------"<<endl;
                cout<<"\n\n\t\t\t\t\t\tEnter your Name: ";
                cin>>name;

                cout<<"\t\t\t\t\t\tEnter UserID: ";
                cin>>userId;
                //cout<<"---------------------";


			//once user has started using application the screen will print for entering user id
			//once user has entered the user id it will be checked in if condition
			//if condition is failed it will call goto function and goto d and will ask user to enter correct ID

			if(userId!="ASC")
			{

				cout<<"\n \t\t\t\t\t\tENTERED ID INCOREECT.PLEASE TRY AGAIN.\n";

				goto d;
			}
			else

                system("cls");
                cout<<"\n\n\t\t\t\t\t\t\tWelcome "<<name;
                cout<<"\n\n\n\t\t\t\t\t\t\tUSER ID ENTERED CORRECT PLEASE ENTER PASSWORD TO PROCEED\n";

			z:
			    string pwd="tiger";
                //initially empty string
			    string pass="";

			char c;

			/*once user has entered correct user id user will be asked to put password
			once the password is entered it will be checked against the password if the condition is true
			then it print the menu if false then user has to enter the pass again
			*/

				cout<<"\n\t\t\t\t\t\t\tPassword = ";

				p:
                
                //wait for user to enter every character
				c=getch();

				cout<<"*";
				   //for printing * instead for password
				   //as password should not be visible always should be encrypted

                //13 is the ascii value for enter key, so it will for you to enter the password
                //till you press the enter key
				if(c!=13)
				{
					pass=pass+c;
					 //for concatenating the string
					goto p;
				}

      			{
                    if(pass==pwd)
                    {

                        cout<<"\n\n\t\t\t\t\t\t\tACESS GRANTED. ENJOY SHOPPING!!\n\n\n";
                        cout<<"\n\n\t\t\t\t\t\t\tP RESS ENTER KEY TO CONTINUE.";

                        getch();

                        system("cls");

                        display();

                            //opens the file gain to input of username,userid and passsword
                            // only is the password is correct, hence put in the if condition.
                            ofstream ofc;

                            ofc.open("customer.txt",ios::app);
                
                            ofc<<"\n";
                            ofc<<"Username: "<<name;
                            ofc<<"\n";
                            ofc<<"UserId: "<<userId;
                            ofc<<"\n";
                            ofc<<"Password: "<<pass;
                            ofc<<"\n\n";

                            ofc.close();
                    }

                    else
                    {
                        cout<<"\n\n\n\t\t\t\t\t\t\tENTERED PASSWORD INCORRECT.PLEASE TRY AGAIN!\n";
                        cout<<"\n\n\n\t\t\t\t\t\t\t ENTER AGAIN :\n";

                        goto z;
                    }
                }
		}
};


int main()
{

    // initializing object for the class Authenticate_User

    Authenticate_User user;

    // calling for total function bill

    user.authenticate();

    getch();
}
