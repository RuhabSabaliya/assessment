#include<iostream>
#include<ctime>
using namespace std;
class ATM
{
	private:
		string name,address,location;
		double accountnum,balance;
	public:
		ATM(string n,string a,string l,double acn,double b)
		{
			name=n;
			address=a;
			location=l;
			accountnum=acn;
			balance=b;
		}
		void display()
		{
			cout<<"\n The name of account holder is= "<<name<<endl;
			cout<<"\n The address of account holder's is= "<<address<<endl;
			cout<<"\n The location of branch is= "<<location<<endl;
			cout<<"\n Account number= "<<accountnum<<endl;
			cout<<"\n------------------------------------------------"<<endl;
		}
		void displayhelp()
		{
			cout << "\n******** HELP SCREEN ********" << endl;
			cout<<"\nYou must Enter the correct pin number to access the Account\nsee your Bank representative for more assistance during bank opening hours\n";
			cout<<"\nThaks for your choice Today!\n";
		}
		void checkbalance()
		{
			cout<<"\n Your account balance is= "<<balance<<endl;
		}
		void deposit(double deposit)
		{
			if(deposit>0)
			{
				balance +=deposit;
				cout<<"\n Your balance after deposit is= "<<balance <<endl;
			}
			else
			{
				cout<<"Insufficient value!"<<endl;
			}

		}
		void withdraw(double withdraw)
		{
			if(balance>withdraw && withdraw>0)
			{
				balance=balance-withdraw;
				cout<<"\n Your balance after withdraw is= "<<balance <<endl;
			}
			else
			{
				cout<<"\nInsuficient value!"<<endl;	
			}
		}
};
int main()
{
	double pin=12345,deposit,withdraw;
	int choice,cont;
	cout << "******** WELCOME TO ATM ********" << endl;
	time_t tt=time(0);
	char*dt=ctime(&tt);
	cout<<"Current date and time:"<<dt<<endl;
	ATM a1("Ruhab sabaliya","Gujrat","Ahmedabad",4386,131442);
	start:        
	cout << "[1]. Access your Account" << endl;
    cout << "[0]. Help" << endl;
	cout<<  "\nEnter The choice= ";
	cin>>choice;
	switch(choice)
	{
		case 0:
		{
			a1.displayhelp();
			goto start;
			break;
		}
		case 1:
		{
			double u_pin;
			cout<<"\nEnter the pin(Default pin is=12345)\nonly one attampt allowed\nATM pin= ";
			cin>>u_pin;
			
			if(pin==u_pin)
			{
				menu:
				cout <<"\n******** ATM MENU ********" << endl;
				cout<<"\n [1]. Check balance";
				cout<<"\n [2]. deposit";
				cout<<"\n [3]. withdraw";
				cout<<"\n [0]. exit"<<endl;
				cout<<"\n Enter The choice= ";
				cin>>choice;
					switch(choice)
					{
						case 0:
						{
							cout<<"Exiting...";
							goto end;
							break;
						}
						case 1:
						{
							a1.display();
							a1.checkbalance();
							break;
						}
						case 2:
						{
							a1.display();
							a1.checkbalance();
							cout<<"\nEnter the amount you want to deposit= ";
							cin>>deposit;
							a1.deposit(deposit);
							break;
						}
						case 3:
						{
							a1.display();
							a1.checkbalance();					
							cout<<"\nEnter the amount you want to withdraw= ";
							cin>>withdraw;
							a1.withdraw(withdraw);
							break;
						}
						default:
						{
							cout<<"Invalid choice";
						}
					}
				}
				else
				{
					cout<<"Your Attamped failed!! No more attamped allowed!! sorry!";
					break;
				}
					goto menu;		
			}
		default:
		{
			cout<<"Invalid choice";
		}
	}
end:
	return 0;
}
