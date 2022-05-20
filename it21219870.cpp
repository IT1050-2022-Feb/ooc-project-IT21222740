
#include<iostream>
using namespace std;

class Customer: public User
{
  private : 
  	int customerID;
  	string customerAddress;
  	Reservation *r[SIZE];

  public : 
    customer();
    void assignDetails( int cID , string cAddress );
    void Display();
    void addReservation(Reservation*res);
    ~customer();
    
};

void Customer::assignDetails( int cID , string cAddress , Reservation * R )
{
	customerID = cId;
	customerAddress = cAddress;  
	r = R;
}

void Customer::Display()
{
	cout << " cutomer Id : " << customerID << endl << " customer address : " <<  customerAddress <<  endl;  
}

Customer::customer(int cID , string cAddress , string name , Reservation * R ,  string password , string Mnumber  ):user(name,password,Mnumber)
{
	customerID = cId;
	customerAddress = cAddress;  
	r = R;
	
}

Customer :: ~customer()
{
		cout << " customer  deleted " ;
}
 
 

class service 
{
	private : 
	   string serviceName;
	   string serviceId;
	   float  serviceCharge;
       Car * c[3]; 
       
    public :  
	    service(string sNAme , string sId, float sCharge);
	    void addcar( car * c1 , car * c2 , car * c3 , car * c4) {
	      c[0] = c1; 
	      c[1] = c2;
	      c[2] = c3;
	      c[3] = c4;
	       
	    void setServiceDetails( string sNAme , string sId, float sCharge);
	    float getServiceCharge();
	    ~service();
         
         		
};
 
service ::service(string sNAme , string sId, float sCharge) 
  {
  	serviceName = sNAme;
  	serviceId = sId;
  	serviceCharge = sCharge;
  }
  
  void service :: setServiceDetails( string sNAme , string sId , float sCharge)
  {
  	serviceName = sNAme;
  	serviceId = sId;
  	serviceCharge = sCharge;
  }
 float service :: getServiceCharge()
 {
 	return serviceCharge;
 }
    
service :: ~service()
 {
 	cout << " service deleted ";
 	
 }
 

 
int main()
 {
 	
     customer* cus1;
cus1 = new customer(2,"matar,srilanka",r);
service * ser1;
new ser1 = service("wedding","S1",1000);
 	
 } 
