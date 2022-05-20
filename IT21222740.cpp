#include<iostream>
using namespace std;
class Payment {
	protected:
		int paymentID;
		float finalPayment;
		Reservation *r;
	public:
		Payment(int ID,Reservation *R)
		{
			paymentID = ID;
			r = R;			
		}
		void calcFinalPayment(service *s ,Offer *o)
		{
			finalPayment = (r->getNoDays()*s->serviceCharge)*(100- o->getdiscount())/100
		}
		void displayFinalPayment()
		{
			cout<<"FINAL PAYMENT IS: "<<finalPayment;
		}
		~Payment()
		{
			cout<<"payment deleted";
		}
		
};
class Cash: public Payment{
	private:
		float amount;
		float balance;
	public:
		Cash(float amnt,int ID,Reservation *R):Payment(ID,R)
		{
			amount = amnt;
		}
		void calcBalance()
		{
			balance  = amount-finalPayment;
		}
		void displayBalance()
		{
			cout<<"Your balance is :"<<balance<<endl;
		}
		~Cash()
		{
			cout<<""
		}
};

class Card: public Payment
{
	private:
		string name;
		string cardNo;
		int cvc;
	public:
		Card(string nm, string cno; int pin,int ID,Reservation *R):Payment(ID,R)
		{
			name = nm;
			cardNo = cno;
			cvc = pin;
		}
		void checkPayment(bool at)
		{
			if (at == 1)
			{
				cout<<"success";
			}
			else 
			{
				cout<<"faliled";
			}
		}
		
};

class Offer{
	private:
		int offerID;
		float discount;
	public:
		void setOfferDetails(int ID, float dis)
		{
			offerID = ID;
			discount = dis;
		}
		float getdiscount()
		{
			return discount;
		}		
};

int main ()
{
	Offer* o1;
	Payment* p1;
	Card * c1;
	Cash *ca1;
	o1 = new Offer();
	p1= new Payment(1,r);
	c1= new Card("Nimal","v12344",123,5,res2);
	ca1= new Cash(5000,2,res1);
	delete o1;
	delete p1;
	delete c1;
	delete ca1;


	return 0;
}
