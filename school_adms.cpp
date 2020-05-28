#include<fstream.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<process.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream.h>

char h[5];


 class adm
{
  char fathnm[30];
  char mothnm[30];
  int age;
  char gender[10];
  unsigned long int annincm;
  char category[10];
  int annualincome();
  int categor();
  int gende();
  int cgp();

  public:

  void modify();
  void show();
  char fullnm[30];
  float cgpa;
  long rollno;
  char strea[10];
  void input(char h[]);
  int clss();
  long calcu();
  void output();

}x;

  long chk()
{
    ifstream fio ;
    long y;

	  if (strcmpi(h,"SCI")==0)
	{
	 fio.open("11a.dat",ios::in);
	}
	  else if (strcmpi(h,"COM")==0)
	{
	  fio.open("11b.dat",ios::in);
	}
	  else if (strcmpi(h,"ART")==0)
	{
	  fio.open("11c.dat",ios::in);
	}
     long pos;
	fio.seekg(0,ios::end);
	pos = fio.tellg();
	if(pos==0)
	{    if (strcmpi(h,"SCI")==0)
	    {  y=18110101;

	    }
	     if (strcmpi(h,"COM")==0)
	   {
	       y=18110201;
	   }
	     if (strcmpi(h,"ART")==0)
	   {
	       y=18110301;
	   }
	}
       else
	{ fio.seekg(pos-sizeof(x));
	fio.read((char *) & x, sizeof(x));
	y=x.rollno;
	y=y+1;       // this is the record to be modified
}    fio.close();
return y;
}


     void adm:: input(char h[])
  {
       cout<<"\n\nEnter the candidate's full name: ";
	 gets(fullnm);

      int fa,fb,fc,fd;

      do
     { fa=0;
       char ca;

	  cout<<"\nEnter the candidate's age: ";
	  cin>>age;

	if(age<18 && age>14)
       {
       }

	else
       {
cout<<"Hello";
	 cout<<"\n!!!Not eligible for admission ** Age shoulbe between 14-18!!!"<<endl;

	 cout<<"Would you like to enter age again??(Y/N) : " ;
	 cin>>ca;
	 cout<<endl;
	  if(ca=='y' || ca=='Y')
	 { fa=1;
	 }
	  else
	 {
	  exit(0);
	 }

       }

     }while(fa==1);

       cout<<"\nEnter the candidate's mother's name: ";
	 gets(mothnm);

       cout<<"\nEnter the candidate's father's name: ";
	 gets(fathnm);
      do
     { fb=0;

	 cout<<"\nEnter the candidate's gender (MALE/FEMALE/OTHER): ";
	 cin>>gender;

	if(strcmpi(gender,"male")==0 || strcmpi(gender,"female")==0 || strcmpi(gender,"other")==0)
       { fb=1;
       }

	else
       {
	 cout<<"\n!!!Incorrect Reply!!!"<<endl;
       }

     }while(fb==0);


       cout<<"\nEnter your annual income: ";
	 cin>>annincm;

       do
     {   fc=0;

	  cout<<"\nEnter your category (GEN/SC/ST/OBC): ";
	   cin>>category;

	if(strcmpi(category,"gen")==0 || strcmpi(category,"sc")==0 || strcmpi(category,"st")==0 || strcmpi(category,"obc")==0)
       { fc=1;
       }

	else
       {
	 cout<<"\n!!!Incorrect Reply!!!"<<endl;
       }

     }while(fc==0);

       do
     { fd=0;

	cout<<"\nEnter pecentage(%) in X class: ";
	 cin>>cgpa;

	if(cgpa>100 || cgpa<0)
       { cout<<"\n!!!Percentage should be between 0%-100%!!!"<<endl;
       }

	else
       {
	 fd=1;
       }

     }while(fd==0);

    strcpy(strea,h);

  }

   void adm:: modify()
  {

    cout<<"\n\nName of the student        : "<<fullnm;

    cout<<"\nRoll No.                   : "<<rollno;

    cout<<"\nStudent's age              : "<<age;

    cout<<"\nMother's name              : "<<mothnm;

    cout<<"\nFather's name              : "<<fathnm;

    cout<<"\nGender                     : "<<gender;

    cout<<"\nParent's Annual Income     : "<<annincm;

    cout<<"\nCategory                   : "<<category;

    cout<<"\nPercentage(%) in X Class   : "<<cgpa;

     cout<<"\n\n\nENTER NEW VALUES --> "<<endl;

    char nm[30]=" ";
    int ag;
    char mnm[30]=" ";
    char fnm[30]=" ";
    char gend[10]=" ";
    unsigned long int ancm;
    char categ[8]=" ";
    float cgpaa;

     cout<<"\n\nEnter the candidate's full name (Enter '.'to retain old one): ";
     gets(nm);

      int ma,mb,mc,md;

      do
     { ma=0;
       char na;

	  cout<<"\nEnter the candidate's age (Enter '0'to retain old one): ";
	  cin>>ag;

	if(ag<18 && ag>14 || ag==0)
       {
       }

	else
       {
	 cout<<"\n!!!Not eligible for admission ** Age shoulbe between 14-18!!!"<<endl;

	 cout<<"Would you like to enter age again??(Y/N) : " ;
	 cin>>na;
	 cout<<endl;
	  if(na=='y' || na=='Y')
	 { ma=1;
	 }
	  else
	 {
	  exit(0);
	 }

       }

     }while(ma==1);

       cout<<"\nEnter the candidate's mother's name (Enter '.'to retain old one): ";
	 gets(mnm);

       cout<<"\nEnter the candidate's father's name (Enter '.'to retain old one): ";
	 gets(fnm);
      do
     { mb=0;

	 cout<<"\nEnter the candidate's gender (MALE/FEMALE/OTHER) (Enter '.'to retain old one): ";
	 cin>>gend;

	if(strcmpi(gend,"male")==0 || strcmpi(gend,"female")==0 || strcmpi(gend,"other")==0 || strcmp(gend,".")==0)
       { mb=1;
       }

	else
       {
	 cout<<"\n!!!Incorrect Reply!!!"<<endl;
       }

     }while(mb==0);


       cout<<"\nEnter your annual income (Enter '0'to retain old one): ";
	 cin>>ancm;

       do
     {   mc=0;

	  cout<<"\nEnter your category (GEN/SC/ST/OBC) (Enter '.'to retain old one): ";
	   cin>>categ;

	if(strcmpi(categ,"gen")==0 || strcmpi(categ,"sc")==0 || strcmpi(categ,"st")==0 || strcmpi(categ,"obc")==0 || strcmp(categ,".")==0)
       { mc=1;
       }

	else
       {
	 cout<<"\n!!!Incorrect Reply!!!"<<endl;
       }

     }while(mc==0);

       do
     { md=0;

	cout<<"\nEnter pecentage(%) in X class (Enter '0'to retain old one): ";
	 cin>>cgpaa;

	if(cgpaa>100 || cgpaa<=0)
       { cout<<"\n!!!Percentage should be between 0%-100%!!!"<<endl;
       }

	else
       {
	 md=1;
       }

     }while(md==0);

    strcpy(strea,h);

     if(strcmp(nm,".")!=0)
    {
      strcpy(fullnm,nm);
    }
     if(ag!=0)
    {
      age=ag;
    }
     if(strcmp(mnm,".")!=0)
    {
      strcpy(mothnm,mnm);
    }
     if(strcmp(fnm,".")!=0)
    {
      strcpy(fathnm,fnm);
    }
     if(strcmp(gend,".")!=0)
    {
      strcpy(gender,gend);
    }
     if(ancm!=0)
    {
      annincm=ancm;
    }
     if(strcmp(categ,".")!=0)
    {
      strcpy(category,categ);
    }
     if(cgpaa!=0)
    {
      cgpa=cgpaa;
    }

    cout<<"\n!!!INFORMATION UPDATED!!!"<<endl;
 }


     void adm:: show()
  {
    clrscr();

    cout<<"\n\nName of the student        : "<<fullnm;

    cout<<"\nRoll No.                   : "<<rollno;

    cout<<"\nStudent's age              : "<<age;

    cout<<"\nMother's name              : "<<mothnm;

    cout<<"\nFather's name              : "<<fathnm;

    cout<<"\nGender                     : "<<gender;

    cout<<"\nParent's Annual Income     : "<<annincm;

    cout<<"\nCategory                   : "<<category;

    cout<<"\nPercentage(%) in X Class   : "<<cgpa;


  }




	 int adm:: annualincome()
       {
	  int s;

	  if(annincm>=1000000)
	  {
	    s=1;
	  }

	  else if(annincm>=800000 && annincm<1000000)
	  {
	    s=3;
	  }

	  else if(annincm>=600000 && annincm<800000)
	  {
	    s=5;
	  }

	  else if(annincm>=400000 && annincm<600000)
	  {
	    s=6;
	  }

	  else if(annincm<400000)
	  {
	    s=7;
	  }

	  return s;
	}


	  int adm:: categor()
	{
	  int d;

		if (strcmpi(category,"gen")==0)
	       {
		 d=1;
	       }

		else if (strcmpi(category,"sc")==0)
	       {
		 d=2;
	       }

		else if (strcmpi(category,"st")==0)
	       {
		 d=3;
	       }

		else if (strcmpi(category,"obc")==0)
	       {
		 d=4;
	       }

	  return d;

	}



	  int adm:: gende()
	{
	  int f3;

	       if (strcmpi(gender,"male")==0)
	       {
		 f3=2;
	       }

	       else if (strcmpi(gender,"female")==0)
	       {
		 f3=3;
	       }

	       else if (strcmpi(gender,"other")==0)
	       {
		 f3=4;
	       }

	       return f3;
	}


	  int adm:: cgp()
	{
	  int g;

	  if(cgpa<=100 && cgpa>90)
	  {
	    g=5;
	  }

	  else if(cgpa<=90 && cgpa>80)
	  {
	    g=4;
	  }

	   else if(cgpa<=80 && cgpa>70)
	  {
	    g=3;
	  }

	   else if(cgpa<=70 && cgpa>60)
	  {
	    g=2;
	  }

	   else if(cgpa<=60 && cgpa>50)
	  {
	    g=1;
	  }

	  return g;
	}


	  int adm:: clss()
	  {
	     float fee;

	       if (strcmpi(h,"SCI")==0)
	       {
		 fee=25000;
	       }

	       else if (strcmpi(h,"COM")==0)
	       {
		 fee=23500;
	       }

	       else if (strcmpi(h,"ART")==0)
	       {
		 fee=22800;
	       }

	    return fee;
	    }



       long adm:: calcu()
	    {  float finfee;
	       float sch;
	       float z;
	       int v=annualincome();
	       int u=categor();
	       int y=gende();
	       int w=cgp();
	       sch=v+u+y+w;
	       cout<<endl<<"The Total Scholarship For The Candidate is: "<<sch<<"%";
	       z=clss();
	       finfee=z-(z*(sch/100));
	       getch();
	       return finfee;

	    }



 void main()
	   { int o,k;
	    char c;
	    do
	    {
	     clrscr();
	     cout<<endl;
	    cout<<endl<<"                      BBBBB   NN   N    PPPPP   SSSSS ";
	    cout<<endl<<"	       	      B   B   NN   N    P   P   S     ";
	    cout<<endl<<"		      BBBBB   N N  N    PPPPP   SSSSS ";
	    cout<<endl<<"		      B   B   N  N N    P           S ";
	    cout<<endl<<"		      BBBBB   N   NN    P       SSSSS ";
	     cout<<endl<<endl<<endl<<endl<<"\t1.ADMISSION"<<endl<<"\t2.CANCEL ADMISSION"<<endl<<"\t3.SHOW DETAILS"<<endl<<"\t4.UPDATE DETAILS"<<endl<<"\t5.EXIT"<<endl<<endl<<"\tEnter Your Option : ";
	     cin>>o;
	     switch(o)
	     {
	       case 1: clrscr();
		       int db;
			   do
		       { db=0;

			   cout<<"\n\nEnter the stream(SCI/COM/ART) : ";
			    cin>>h;

			  if(strcmpi(h,"sci")==0 || strcmpi(h,"com")==0 || strcmpi(h,"art")==0)
			 {  db=1;
			 }

			  else
			 {
			  cout<<"\n!!!Incorrect Reply!!!"<<endl;
			 }

		       }while(db==0);

		       clrscr();

		       ofstream fout;
			if (strcmpi(h,"SCI")==0)
			{
			 fout.open("11a.dat",ios::app|ios::binary);
			}
			else if (strcmpi(h,"COM")==0)
			{
			 fout.open("11b.dat",ios::app|ios::binary);
			}
			else if (strcmpi(h,"ART")==0)
			{
			 fout.open("11c.dat",ios::app|ios::binary);
			} adm a;
			a.input(h);
			a.rollno=chk();

			 if (strcmpi(h,"SCI")==0)
			{
			   if(a.cgpa>=90)
			   {  k=1;

			   }
			   else
			   { k=0;
			   }

			}
			if (strcmpi(h,"COM")==0)
			{
			   if(a.cgpa>=85)
			   { k=1;

			   }
			   else
			   { k=0;
			   }
			}
			if (strcmpi(h,"ART")==0)
			{
			   if(a.cgpa>=75)
			   { k=1;

			   }
			   else
			   { k=0;
			   }
			}


		       if(k==0)
		       { clrscr();
			 cout<<endl<<a.fullnm<<" is not eligible for admission in this school :(:( ";
			 fout.close();
			 break;
		       }
		       else if(k==1)
		       {  fout.write((char*)&a,sizeof(a));
			  fout.close();
			 int r=a.calcu();
			 clrscr();

			 cout<<endl<<endl<<"THE TOTAL QUATERLY FEES IS  "<<r;

			 cout<<endl<<"ADMISSION OF "<<a.fullnm<<" has been confirmed to class XI ";
			 cout<<endl<<"Roll No. is: "<<a.rollno;
		       }
		       break;

	       case 2: clrscr();
			int dc;
			   do
		       { dc=0;

			   cout<<"\n\nEnter the stream(SCI/COM/ART) : ";
			    cin>>h;

			  if(strcmpi(h,"sci")==0 || strcmpi(h,"com")==0 || strcmpi(h,"art")==0)
			 {  dc=1;
			 }

			  else
			 {
			  cout<<"\n!!!Incorrect Reply!!!"<<endl;
			 }

		       }while(dc==0);

		       clrscr();



		       ifstream fin;

		       long eno;
		       int f=0;

		       ofstream fout1;

			if(strcmpi(h,"SCI")==0)
			{
			 fin.open("11a.dat",ios::in);
			}

			else if(strcmpi(h,"COM")==0)
			{
			 fin.open("11b.dat",ios::in);
			}

			else if(strcmpi(h,"ART")==0)
			{
			 fin.open("11c.dat",ios::in);
			}

			fout1.open("temp.dat",ios::out|ios::binary);

			cout<<endl<<"Enter the roll no. of student to be deleted :";
			cin>>eno;

			 while(fin.read((char*)&x,sizeof(x)))
			{  if(eno==x.rollno)
			  { f=1;
			  }

			   else
			  { fout1.write((char*)&x,sizeof(x));
			  }
			}

			fout1.close();
			fin.close();

			 if(f==0)
			{ cout<<endl<<"\nRecord not found";
			}

			 else
			{ clrscr();

			  cout<<endl<<"\nAdmission has been cancelled";

			   if(strcmpi(h,"SCI")==0)
			  {
			    remove("11a.dat");
			    rename("temp.dat","11a.dat");
			  }

			   else if(strcmpi(h,"COM")==0)
			  {
			    remove("11b.dat");
			    rename("temp.dat","11b.dat");
			  }

			   else if(strcmpi(h,"ART")==0)
			  {
			    remove("11c.dat");
			    rename("temp.dat","11c.dat");
			  }
			}
		       break;
	       case 3:  clrscr();

			  int dd;
			   do
		       { dd=0;

			   cout<<"Enter the stream(SCI/COM/ART) : ";
			    cin>>h;

			  if(strcmpi(h,"sci")==0 || strcmpi(h,"com")==0 || strcmpi(h,"art")==0)
			 {  dd=1;
			 }

			  else
			 {
			  cout<<"\n!!!Incorrect Reply!!!"<<endl;
			 }

		       }while(dd==0);

			clrscr();

			ifstream fin1;

			long eno1;
			int f2=0;

			if(strcmpi(h,"SCI")==0)
			{
			 fin1.open("11a.dat",ios::in);
			}

			else if(strcmpi(h,"COM")==0)
			{
			 fin1.open("11b.dat",ios::in);
			}

			else if(strcmpi(h,"ART")==0)
			{
			 fin1.open("11c.dat",ios::in);
			}

			 cout<<endl<<"Enter the roll no. of the student whose details need to be shown :";
			 cin>>eno1;

			 while(fin1.read((char*)&x,sizeof(x)))
			{
			   if(eno1==x.rollno)
			  { f2=1;
			    x.show();
			    break;
			  }
			}

			fin1.close();

			 if(f2==0)
			{ cout<<"\nStudent not found!!";
			}

		       break;

	       case 4: clrscr();

			int de;
			   do
		       { de=0;

			   cout<<"Enter the stream(SCI/COM/ART) : ";
			    cin>>h;

			  if(strcmpi(h,"sci")==0 || strcmpi(h,"com")==0 || strcmpi(h,"art")==0)
			 {  de=1;
			 }

			  else
			 {
			  cout<<"\n!!!Incorrect Reply!!!"<<endl;
			 }

		       }while(de==0);

		       clrscr();

		       long en;
		       int f1=0;
		       long pos;

		       fstream finout;
		       if (strcmpi(h,"SCI")==0)
		      {
			finout.open("11a.dat",ios::in|ios::out|ios::binary);
		      }

		       else if (strcmpi(h,"COM")==0)
		      {
			finout.open("11b.dat",ios::in|ios::out|ios::binary);
		      }

		       else if (strcmpi(h,"ART")==0)
		      {
			finout.open("11c.dat",ios::in|ios::out|ios::binary);
		      }

		      finout.seekg(0,ios::beg);

		   cout<<"\nEnter the roll no. of student whose details need to be modified : ";
		      cin>>en;

		      while(!finout.eof())
		     { pos=finout.tellg();
		       finout.read((char*)&x,sizeof(x));
			if(en==x.rollno)
		       { f1=1;
			 finout.seekg(pos);
			 x.modify();
			 finout.write((char*)&x,sizeof(x));
			 finout.close();
			 break;
			}
		     }

		     finout.close();

		      if(f1==0)
		     { cout<<"\n\nStudent Not Found!!";
		     }
		      break;
	       case 5: exit(0);
		       break;

	       default:cout<<endl<<"invalid option"; break;
	     }
	     cout<<endl<<endl<<"Would You Like To Go Back To The Main Menu(Y/N)";
	     cin>>c;
	    }while(c=='y'|| c=='Y');

	    getch();
	    }
