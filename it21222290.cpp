#include<iosteam>
#include<cstring>

class User{
	private: 
	string userName;
	string userPassword;
	bool validation;
	
	public:
	User();
	User(string name,string ps, bool val)
	{
		userName = name;
		userPassword = ps
		validation = val;
	}
	
};



class Driver : public User{
	private :
	int  driver_ID;
	float payment;
	char r_date;
	
	public:
		Driver()
		{
			driver_ID = 0;
			payment = 0.0;
			strcpy(r_date,'');		
		};
		
		char acceptRequest()
		{
				return 'accept';
		};
		
		char declineREquest()
		{
				return 'decline';
		};
		
		void ReservationDate(char d, Reservation * res )
		{
			strcpy(r_date, res->getdate());
		};
		
		void recievePayment(float pay)
		{
			payment = pay;
		};
		
		~Driver()
		{
			cout<<"Driver deleted";
		};
};

class Reservation
{
	private :
		int reservation_ID;
		char date;
		char time;
		float pay;
		Payment *pay;
		
		public :
			Reservation()
			{
				reservaton_ID =0;
				strcpy(date,"");
				strcpy(time,"");
			};
			char getdate(){
				return date;
			};
			bool changeCarStatus(){
			};
			
			bool notifyDriver(){
			};
			
			bool cancelReservation(){
			};
			
			void addPayment(Payment *p)
			{
				pay = p->getFinalPayment();
			}
			~Reservation()
			{
				cout<<"Reservation deleted";
			};
}

class Cancelation
{
	private :
		int cancelation_ID;
		float refund
		Reservation *res;
		char res_date
	
	public :
		Cancelation()
		{
			cancelation_ID = 0;
			refund = 0.0;
			strcpy(res_date,"");
		};
		void setID(int id)
		{
			cancelation_ID = id;
		};
		
		bool notifyDriver()
		{
		};
		
		bool changeCarStatus()
		{
		};
		
		void refund(float ref)
		{
			refund = ref;
		};
			
		void addReservationDate(Reservation *r)
		{
			res_date= r->getdate();
		};
}

int main()
{
	Driver * d1,* d2;
	
	d1 = new Driver();
	d2 = new Driver();
	
	Reservation *res1,*res2;
	
	res1 = new Reservation();
	res2 = new Reservation();
	
	Cancelation *can1,*can2;
	
	can1 = Cancelation();
	can2 = Cancelation();
	
	delete d1;
	delete d2;
	delete res1;
	delete res2;
	delete can1;
	delete can2;
	
}


      


