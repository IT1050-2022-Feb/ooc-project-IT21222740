#include<iostream>
using namespace std;
class Car 
{
	private :
		int carID;
		string carRegNo;
		float carMilage;
		bool avaStatus;
		
	public:
	    Car();
	    void setcarDetails(int id,string regno,float milage,bool status);
	    bool checkStatus();
	    void updateCardetails(bool status);
	    ~Car();
	    	
};

    
    Car::Car()
    {
       carID = 0;
       carRegNo = "";
       carMilage = 0;
       avaStatus = 0;
       
	}
	void Car::setcarDetails(int id,string regno,float milage,bool status)
	{
	   carID = id;
       carRegNo = regno;
       carMilage = milage;
       avaStatus = status;
       
	}
    bool Car::checkStatus()
    {
    	if (avaStatus == 1)
    	{ 
    	   return 1;
		}
		else
		{
			return 0;
		}
	}
	void Car:: updateCardetails(bool status)
	{
		avaStatus = status;
	}
  Car::~Car()
    {
    	cout << "Car deleted"<< endl;
	}
	
	int main()
	{
		return 0;
	}
	
class Notices
{
	private:
		int noticeID;
		string noticeDescription;
		string noticeDate;
		Customer*cus;
		Driver*drv;
		
	public:
		notices();
		void assignNoticeDetails(int id,string Description,string date);
		void displayNotice();
		~Notices ();
		
};

    Notices::notices()
    {
    	noticeID = 0;
	    noticeDescription = "";
	    noticeDate = "";
	}
	void assignNoticeDetails(int id,string description,string date)
	{
		noticeID = id;
	    noticeDescription = description;
	    noticeDate = date;
	}
	void displayNotice()
	{
	    cout<<endl<<"Notice ID : "<< id <<endl;
        cout<<"Notice : "<<description <<endl;
        cout<<endl<<"Notice date : "<< date <<endl
	}
	Notices ::~Notices ();
    {
    	cout << "Notice deleted"<< endl;
	}
	
Car * c1;
c1 = new Car();
delete c1;

Notices *n1;
n1 = new notice();
delete n1;

    
    
