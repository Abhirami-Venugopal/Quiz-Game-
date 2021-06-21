#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
#include<fstream.h>

void main()
{char name[25];
int flag=0,a,answer,x=0;
float amt;
system("COLOR E0");
cout<<"ENTER NAME:";
gets(name);
cout<<"Enter age:";
cin>>a;
if(a>=18)
cout<<"\nCan Play\n";
else
{cout<<"\nCannot play\n";
getch();
exit(0);
}
cout<<"ENTER AMOUNT BOUGHT:\n";
cin>>amt;
{
cout<<"\nCATEGORY ONE:EASY\n";
cout<<"\n\nQ1.Which is the oldest democracy in the world?\n";
cout<< "\n1)Britain  \n2)India  \n3)Pakistan \n4)Russia\n";
cout<<"Enter answer:";
cin>>answer;
{ switch(answer)
{case 1:
         cout<<"Right answer";
         PlaySound(TEXT("C:\\Users\\user\\Desktop\\clow.WAV"),NULL,SND_LOOP);
         flag++;
         x=x+10;
         break;
case 2:
        cout<<"Wrong answer\n";
        cout<<"The right answer is britain";
        break;
case 3: cout<<"Wrong answer\n";
        cout<<"The right answer is Britain";
        break;
case 4: cout<<"Wrong answer\n";
        cout<<"Right answer is Britain";
        break;
}
if(flag!=0)
amt=amt+amt*0.08;
else
amt=amt-amt*0.08;
cout<<"\nThe current amount is:"<<amt;
}
cout<<"\n\nPoints are:"<<x;
cout<<"\nDO YOU WANT TO EXIT?";
cout<<"\n1) YES \n2) NO\n";
cin>>answer;
switch(answer)
{case 1: cout<<"THANK YOU FOR PLAYING.";
         getch();
         exit(0);
         break;
case 2: cout<<"You will now recieve your next question\n";
        break;
        }
{ cout<<"\nCATEGORY ONE:EASY\n";
cout<<"\n\nQ2.What is the fear of spiders called?\n";
cout<< "\n1)Spiderophobia  \n2)Arachanophobia  \n3)Agoraphobia \n4)Cynophobia\n";
cout<<"Enter answer:";
cin>>answer;
{switch(answer)
{case 1:
         cout<<"Wrong answer\n";
         cout<<"Right answer is Arachanophobia";
          break;
case 2:
        cout<<"Right answer\n";
        PlaySound(TEXT("C:\\Users\\user\\Desktop\\clow.WAV"),NULL,SND_LOOP);
        flag++;
        x=x+10;
        break;
case 3: cout<<"Wrong answer\n";
        cout<<"Right answer is Arachanophobia";
        break;
case 4:
        cout<<"Wrong answer\n";
        cout<<"Right answer is Arachanophobia";
        break;
}
if(flag!=0)
amt=amt+amt*0.08;
else
amt=amt-amt*0.08;
cout<<"\nThe current amount is:"<<amt;
}
cout<<"\n\nPoints are:"<<x;
cout<<"\nDO YOU WANT TO EXIT?";
cout<<"\n1) YES \n2) NO\n";
cin>>answer;
switch(answer)
{case 1: cout<<"THANK YOU FOR PLAYING.";
         getch();
         exit(0);
         break;
case 2: cout<<"You will now recieve your next question";
        break;
        } }
{cout<<"\nCATEGORY ONE:EASY\n";
cout<<"\n\nQ3.Which disease affects most people worldwide?\n";
cout<< "\n1)Cancer \n2)Malaria \n3)Obesity \n4)Malaria\n";
cout<<"Enter answer:";
cin>>answer;
{ switch(answer)
{case 1: cout<<"Wrong answer\n";
         cout<<"Right answer is Malaria";
         break;
case 2:
        cout<<"Right answer\n";
        PlaySound(TEXT("C:\\Users\\user\\Desktop\\clow.WAV"),NULL,SND_LOOP);
        flag++;
        x=x+10;
        break;
case 3: cout<<"Wrong answer\n";
        cout<<"Right answer is Malaria";
        break;
case 4: cout<<"Wrong answer\n";
        cout<<"Right answer is Malaria";
        break;
}
if(flag!=0)
amt=amt+amt*0.08;
else
amt=amt-amt*0.08;
cout<<"\nThe current amount is:"<<amt;
}
cout<<"\n\nPoints are:"<<x;
cout<<"\nDO YOU WANT TO EXIT?";
cout<<"\n1) YES \n2) NO\n";
cin>>answer;
switch(answer)
{case 1: cout<<"THANK YOU FOR PLAYIN.";
         getch();
         exit(0);
         break;
case 2: cout<<"You will now recieve your next question";
        break;
        }
{
cout<<"\nCATEGORY ONE:EASY\n";
cout<<"\n\nQ4.Name the seventh planet from the sun.\n";
cout<< "\n1)Uranus \n2)Earth \n3)Mars \n4)Saturn\n";
cout<<"Enter answer:";
cin>>answer;
{ switch(answer)
{case 1: cout<<"Right answer";
         PlaySound(TEXT("C:\\Users\\user\\Desktop\\clow.WAV"),NULL,SND_LOOP);
         flag++;
         x+=10;
         break;
case 2: cout<<"Wrong answer\n";
        cout<<"Right answer is Uranus";
        break;
case 3: cout<<"Wrong answer\n";
        cout<<"Right answer is Uranus";
        break;
case 4: cout<<"Wrong answer\n";
        cout<<"Right answer is Uranus";
        break;
}
if(flag!=0)
amt=amt+amt*0.08;
else
amt=amt-amt*0.08;
cout<<"\nThe current amount is:"<<amt;
}
cout<<"\n\nPoints are:"<<x;
cout<<"\nDO YOU WANT TO EXIT?";
cout<<"\n1) YES \n2) NO\n";
cin>>answer;
switch(answer)
{case 1: cout<<"THANK YOU FOR PLAYIN.";
         getch();
         exit(0);
         break;
case 2: cout<<"You will now recieve your next question";
        break;
        }

}
{
cout<<"\nCATEGORY TWO:INTERMEDIATE\n";
cout<<"\n\nQ5.Which U.S president was assasinated in 1865?\n";
cout<< "\n1)Franklin Pierce \n2)Abraham Lincoln \n3)Millard Fillmore \n4)Donald Trump\n";
cout<<"Enter answer:";
cin>>answer;
{ switch(answer)
{case 1: cout<<"Wrong answer\n";
         cout<<"Right answer is Abraham Lincoln";
         break;
case 2: cout<<"Right answer";
        PlaySound(TEXT("C:\\Users\\user\\Desktop\\clow.WAV"),NULL,SND_LOOP);
        flag++;
        x+=10;
        break;
case 3: cout<<"Wrong answer\n";
        cout<<"Right answer is Abraham Lincoln";
        break;
case 4: cout<<"Wrong answer\n";
        cout<<"Right answer is Abraham Lincoln";
        break;
}
if(flag!=0)
amt=amt+amt*0.08;
else
amt=amt-amt*0.08;
cout<<"\nThe current amount is:"<<amt;
}
cout<<"\n\nPoints are:"<<x;
cout<<"\nDO YOU WANT TO EXIT?";
cout<<"\n1) YES \n2) NO\n";
cin>>answer;
switch(answer)
{case 1: cout<<"THANK YOU FOR PLAYIN.";
         getch();
         exit(0);
         break;
case 2: cout<<"You will now recieve your next question";
        break;
        }

}}
{cout<<"\nCATEGORY TWO:INTERMEDIATE\n";
cout<<"\n\nQ6.With which of the following vitamins is the suffix COMPLEX used?\n";
cout<< "\n1)Vitamin A \n2)Vitamin B \n3)Vitamin C \n4)Vitamin D\n";
cout<<"Enter answer:";
cin>>answer;
{ switch(answer)
{case 1: cout<<"Wrong answer\n";
         cout<<"Right answer is Vitamin B";
         break;
case 2: cout<<"Right answer\n";
        PlaySound(TEXT("C:\\Users\\user\\Desktop\\clow.WAV"),NULL,SND_LOOP);
        flag++;
        x+=10;
        break;
case 3: cout<<"Wrong answer\n";
        cout<<"Right answer is Vitamin B";
        break;
case 4: cout<<"Wrong answer\n";
        cout<<"Right answer is Vitamin B";
        break;
}
if(flag!=0)
amt=amt+amt*0.08;
else
amt=amt-amt*0.08;
cout<<"\nThe current amount is:"<<amt;
}
cout<<"\n\nPoints are:"<<x;
cout<<"\nDO YOU WANT TO EXIT?";
cout<<"\n1) YES \n2) NO\n";
cin>>answer;
switch(answer)
{case 1: cout<<"THANK YOU FOR PLAYIN.";
         getch();
         exit(0);
         break;
case 2: cout<<"You will now recieve your next question";
        break;
        }}
{cout<<"\nCATEGORY TWO:INTERMEDIATE\n";
cout<<"\n\nQ7.Who invented the internet\n";
cout<< "\n1)Samuel Morse \n2)Thomas Alva Edison \n3)George Bush \n4)Robert E.Kahn\n";
cout<<"Enter answer:";
cin>>answer;
{ switch(answer)
{case 1: cout<<"Wrong answer\n";
         cout<<"Right answer is Robert E. Kahn";
         break;
case 2: cout<<"Wrong answer\n";
        cout<<"Right answer is Robert E. Kahn";
        break;
case 3: cout<<"Wrong answer\n";
        cout<<"Right answer is Robert E.Kahn";
        break;
case 4: cout<<"Right Answer\n";
        PlaySound(TEXT("C:\\Users\\user\\Desktop\\clow.WAV"),NULL,SND_LOOP);
        flag++;
        x=x+10;
        break;
}
if(flag!=0)
amt=amt+amt*0.08;
else
amt=amt-amt*0.08;
cout<<"\nThe current amount is:"<<amt;
}
cout<<"\n\nPoints are:"<<x;
cout<<"\nDO YOU WANT TO EXIT?";
cout<<"\n1) YES \n2) NO\n";
cin>>answer;
switch(answer)
{case 1: cout<<"THANK YOU FOR PLAYIN.";
         getch();
         exit(0);
         break;
case 2: cout<<"You will now recieve your next question";
        break;
        }}
{cout<<"\nCATEGORY TWO:INTERMEDIATE\n";
cout<<"\n\nQ8.Folketing is the parliament of which country\n";
cout<< "\n1)Denmark \n2)Spain \n3)Germany \n4)Paria\n";
cout<<"Enter answer:";
cin>>answer;
{ switch(answer)
{case 1: cout<<"Right Answer\n";
         PlaySound(TEXT("C:\\Users\\user\\Desktop\\clow.WAV"),NULL,SND_LOOP);
        flag++;
        x=x+10;
        break;
case 2: cout<<"Wrong answer\n";
        cout<<"Right answer is Denmark";
        break;
case 3: cout<<"Wrong answer\n";
        cout<<"Right answer is Denkmark";
        break;
case 4: cout<<"Wrong answer\n";
        cout<<"Right answer is Denkmark";
        break;
}
if(flag!=0)
amt=amt+amt*0.08;
else
amt=amt-amt*0.08;
cout<<"\nThe current amount is:"<<amt;
}
cout<<"\n\nPoints are:"<<x;
cout<<"\nDO YOU WANT TO EXIT?";
cout<<"\n1) YES \n2) NO\n";
cin>>answer;
switch(answer)
{case 1: cout<<"THANK YOU FOR PLAYIN.";
         getch();
         exit(0);
         break;
case 2: cout<<"You will now recieve your next question";
        break;
        }}
{cout<<"\nCATEGORY THREE:ADVANCED\n";
cout<<"\n\nQ9.In which decade did the first translantic radio broadcast occur? \n";
cout<< "\n1)1850s \n2)1860s\n3)1870s \n4)1900s\n";
cout<<"Enter answer:";
cin>>answer;
{ switch(answer)
{case 1: cout<<"Wrong Answer\n";
        cout<<"Right answer is 1900s";
        break;
case 2: cout<<"Wrong answer\n";
        cout<<"Right answer is 1900s";
        break;
case 3: cout<<"Wrong answer\n";
        cout<<"Right answer is 1900s";
        break;
case 4: cout<<"Right Answer\n";
        PlaySound(TEXT("C:\\Users\\user\\Desktop\\clow.WAV"),NULL,SND_LOOP);
        flag++;
        x=x+10;
        break;
}
if(flag!=0)
amt=amt+amt*0.08;
else
amt=amt-amt*0.08;
cout<<"\nThe current amount is:"<<amt;
}
cout<<"\n\nPoints are:"<<x;
cout<<"\nDO YOU WANT TO EXIT?";
cout<<"\n1) YES \n2) NO\n";
cin>>answer;
switch(answer)
{case 1: cout<<"THANK YOU FOR PLAYIN.";
         getch();
         exit(0);
         break;
case 2: cout<<"You will now recieve your next question";
        break;
        }}
        {cout<<"\nCATEGORY THREE:ADVANCED\n";
cout<<"\n\nQ10.Which is the part of the database that holds only one type of information? \n";
cout<< "\n1)Report \n2)Recordn \n3)File \n4)Field\n";
cout<<"Enter answer:";
cin>>answer;
{ switch(answer)
{case 1: cout<<"Wrong Answer\n";
        cout<<"Right answer is Field";
        break;
case 2: cout<<"Wrong answer\n";
        cout<<"Right answer is Field";
        break;
case 3: cout<<"Wrong answer\n";
        cout<<"Right answer is Field";
        break;
case 4: cout<<"Right Answer\n";
         PlaySound(TEXT("C:\\Users\\user\\Desktop\\clow.WAV"),NULL,SND_LOOP);
        flag++;
        x=x+10;
        break;
}
if(flag!=0)
amt=amt+amt*0.08;
else
amt=amt-amt*0.08;
cout<<"\nThe current amount is:"<<amt;
}
cout<<"\n\nPoints are:"<<x;
cout<<"\nDO YOU WANT TO EXIT?";
cout<<"\n1) YES \n2) NO\n";
cin>>answer;
switch(answer)
{case 1: cout<<"THANK YOU FOR PLAYIN.";
         getch();
         exit(0);
         break;
case 2: cout<<"You will now recieve your next question";
        break;
        }}
        {cout<<"\nCATEGORY THREE:ADVANCED\n";
cout<<"\n\nQ11.Where is the national stock exchange of India? \n";
cout<< "\n1)Kerala \n2)Kashmir \n3)Mumbai \n4)Uttarakhand\n";
cout<<"Enter answer:";
cin>>answer;
{ switch(answer)
{case 1: cout<<"Wrong Answer\n";
        cout<<"Right answer is Mumbai";
        break;
case 2: cout<<"Wrong answer\n";
        cout<<"Right answer is Mumbai";
        break;
case 3: cout<<"Right answer\n";
        PlaySound(TEXT("C:\\Users\\user\\Desktop\\clow.WAV"),NULL,SND_LOOP);
        flag++;
        x=x+10;
        break;
case 4: cout<<"Wrong Answer\n";
         cout<<"Right answer is Mumbai";

        break;
}
if(flag!=0)
amt=amt+amt*0.08;
else
amt=amt-amt*0.08;
cout<<"\nThe current amount is:"<<amt;
}
cout<<"\n\nPoints are:"<<x;
cout<<"\nDO YOU WANT TO EXIT?";
cout<<"\n1) YES \n2) NO\n";
cin>>answer;
switch(answer)
{case 1: cout<<"THANK YOU FOR PLAYIN.";
         getch();
         exit(0);
         break;
case 2: cout<<"You will now recieve your next question";
        break;
        }}
{cout<<"\nCATEGORY THREE:ADVANCED\n";
cout<<"\n\nQ12.Which was the first space station to be launched in the world? \n";
cout<< "\n1)Salyut1   \n2)Salyut2 \n3)Tiangong 2 \n4)Kosmos 557\n";
cout<<"Enter answer:";
cin>>answer;
{ switch(answer)
{case 1: cout<<"Right Answer\n";
         PlaySound(TEXT("C:\\Users\\user\\Desktop\\clow.WAV"),NULL,SND_LOOP);
         flag++;
         x=x+10;
         break;
case 2: cout<<"Wrong answer\n";
        cout<<"Right answer is Salyut1";
        break;
case 3: cout<<"Wrong answer\n";
        cout<<"Right answer is salyut 1";
        break;
case 4: cout<<"Wrong Answer\n";
        cout<<"Right answer is Salyut 1";
        break;
}
if(flag!=0)
amt=amt+amt*0.08;
else
amt=amt-amt*0.08;
cout<<"\nThe current amount is:"<<amt;
}
cout<<"\n\nPoints are:"<<x;
cout<<"\nDO YOU WANT TO EXIT?";
cout<<"\n1) YES \n2) NO\n";
cin>>answer;
switch(answer)
{case 1: cout<<"THANK YOU FOR PLAYIN.";
         getch();
         exit(0);
         break;
case 2: cout<<"You will now recieve your next question";
        break;
        }}}

getch();
}




