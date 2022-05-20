#include <iostream>
#include <cstring>
#include "Donor.h"
#include "Recipient.h"
#include "Admin.h"
#include "report.h"
#include "lab.h"
#include "consultant.h"
#include "appointment.h"

using namespace std;

int main()
{
  //IT21255588_Donor's main part
	Appointment *a1 = new Appointment();
  a1->setDetails(001,"","");
  
	Donor *D1;
	D1 = new Donor();

	D1->setUserDetails(001, "Fernando", "Fdo1995", "Password123", "0749765538");
  	D1->checkUser();
	D1->displayDetails();
	D1->~Donor();
 
	delete D1;

  //IT21254970_Recipient's main part
  Recipient *R1;
	R1 = new Recipient();

	R1->setUserDetails(1001, "Ann", "Ann16$", "PAssword1&", "0772897653");
  R1->checkUser();
	R1->displayDetails();
	R1->~Recipient();
 
	delete R1;

  //IT21253812_Admin's main part
  Admin *A1;
  A1 = new Admin();

  A1->setUserDetails(2001, "Niki", "Niki001", "Password1*", "07699854632");
  A1->checkUser();
  A1->displayDetails();
  A1->~Admin();

  delete A1;

  //IT21252204_Lab & report main part
  Lab *L1;
  L1 = new Lab();

  L1->setLabDetails(301, "3rd floor");
  L1->displayLabDetails();
  L1->~Lab();

  delete L1;

  Donor *D2;
  D2 = new Donor();
  
  D2->setUserDetails(001, "Fernando", "Fdo1995", "Password123", "0749765538");
  
  Report *r1;  
  r1 = new Report();
  
  r1->setReportDetails(001,"O Negative");
  r1->displayReportDetails(D2);
  r1->~Report();

  delete r1;
  delete D2;
  
//IT21249952_consultant's main part
  Consultant*c1;
	c1= new Consultant();
	c1->setConsultantDetails("Dr.Kalum","kalum123",001,"PAssword1&","0779150241");
  c1->checkUser(); 
	c1->displayConsultantDetails();
	c1->~Consultant();
	
	delete c1;


  Appointment*A1;
	A1= new Appointment();
	A1->setDetails(001,"2022/01/02, 08:30am","General Hospital,Kurunegala");
	A1->viewDetails();
	A1->changeDateandTime();
	A1->changeLocation();
	A1->canselappointment();
	A1->~Appointment();
	
	delete A1;
	
  
  return 0;
}
