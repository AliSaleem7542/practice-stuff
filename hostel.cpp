#include<iostream>
using namespace std;
main() {

string name, id, block, emergencycontact, complaintreg, complaint, nameGu, mess;
int roomnum, press, usertype, totalstudents, fee;
int count=0;
cout<<" **************************************************       "<<endl;
cout<<" *             Hostel Management System           *       "<<endl;
cout<<" **************************************************        "<<endl;
cout<<"                   Main Menu        "<<endl;
cout<<"      -----------------------------------      "<<endl;
cout<<"Information required for admision in hostel "<<endl;
cout<<"1-Add Student  2-Add Guardian Name 3-Assigned Room Number"<<endl;
cout<<"4-Hostel Block 5-Fee Paid          6-Mess Plan"<<endl;
cout<<"If you want to continue Press 1 or press 0 to exit : "<<endl;
cin>>press;
if(press==1){
cout<<"Enter Login Option"<<endl;
cout<<"1-Admin"<<endl;
cout<<"2-Agent"<<endl;
cout<<"Enter your Choice"<<endl;
cin>>usertype;
if(usertype==1){
cout<<"How many students you want to enter"<<endl;
cin>>totalstudents;
while(count<totalstudents){
cout<<" Please enter Student Information "<<count+1<<endl;
cout<<" 1-Add Student name "<<endl;
cin>>name;
cout<<" 2-Add Guardian name "<<endl;
cin>>nameGu;
cout<<" 3-Add Student id "<<endl;
cin>>id;
cout<<" 4-Assign Room Number"<<endl;
cin>>roomnum;
cout<<" 5-Room Availability"<<endl;
if((roomnum>=1 && roomnum<=10) || (roomnum>=20 && roomnum<=60)){
cout<<"Room "<<roomnum<<" is Available"<<endl;
}else{
cout<<"Room is not available(room 1to10 and room20to60 are available only) "<<endl;
cout<<"Enter Another room"<<endl;
cin>>roomnum;
} 
cout<<" 6-Enter hostel block(A/B/C) "<<endl;
cin>>block;  
cout<<" 7-Enter fee paid by student (Full fee = 10000)"<<endl;
cin>>fee;
if(fee<10000){
cout<<name<<" has not paid complete fee"<<endl;
cout<<10000-fee<<" yet to pay"<<endl;
}
else if(fee>=10000){
cout<<"Fee paid completely"<<endl;
}      
cout<<"8-Did student applied for a mess plan?(yes/no)"<<endl;
cin>>mess;
cout<<"9-Emergency contact Number"<<endl;
cin>>emergencycontact;
cout<<"10-Complaint Registration(yes/no)"<<endl;
cin>>complaintreg;
if(complaintreg=="yes" || complaintreg=="Yes"){
cout<<"Enter complaint"<<endl;
cin>>complaint;
}else{
complaint="No-Complaint";
}
cout<<"       Student Hostel Record "<<endl;
cout<<"Guardian Name: "<<nameGu<<endl;
cout<<"Name: "<<name<<endl;
cout<<"ID: "<<id<<endl;
cout<<"Room Number: "<<roomnum<<endl;
cout<<"Hostel Block: "<<block<<endl; 
cout<<"fee paid: "<<fee<<endl;
cout<<"Mess plan: "<<mess<<endl;
cout<<"Emergency Contact Number "<<emergencycontact<<endl;
cout<<"Complaint: "<<complaint<<endl;
if((fee>=10000) && (mess=="yes" || mess=="Yes")){
cout<<"Admission Approved"<<endl;
}else
{
cout<<"Admission Declined"<<endl;
}

cout<<"================================================"<<endl;
cout<<"= THANK YOU FOR USING HOSTEL MANAGEMENT SYSTEM ="<<endl;
cout<<"================================================"<<endl;
cout<<"Program ended , Enter another student information"<<endl;


}
}else
{
cout<<"You have limited feature as an agent. Program ended"<<endl;
}

}
}