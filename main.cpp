#include<iostream>
#include<windows.h>
#include <stdlib.h>     //srand, rand //
#include <iomanip>
#include <string>
#include "namee.h"


using namespace std;


template <typename t>
class SCORE
{

private:

int score;

public:


    SCORE(): score(0) {}

    SCORE(int g): score(g) {}

    ~SCORE(){}




void get_score(int hh)
{
    score = hh;
}



    void show_score()
    {
        cout<<endl;
        cout<<"Your score is "<<score<<" points"<<endl;
    }




SCORE<int> operator+ (const SCORE& d) const
{
    int sed = score + d.score;

      return SCORE(sed);


}


};












class NAME
{

private:
 string namee;
   int age ;




public:


class KL{};  //error's class//



    NAME(): namee("\0"), age(0) {}

    NAME(string a, int b): namee(a), age(b) {}

    NAME ( const NAME& w)
    {
     this->age = age;
    this->namee = namee;
    }

    ~NAME() {}




    void get_Name()
    {

        cout<<"Enter your name:";
        cin>>namee;
        cout<<"Enter your age:";
        cin>>age;


        if(age<18)            //error's criteria//
        {
        throw KL();
        }

    }






    void show_NAME()
    {
        show_Name(namee);
    }

};




class Batleship: public NAME {                     //board 9x9  //

private:

const int colums ;
const int rows ;
const int par ;

int number, s, ker;
int PC_ships, Persons_ships;
char Person[10][10];
char PC[10][10];
char Table[13][23];


public:


int *ss = new int[10];
char *tt = new char[6];




Batleship(): number(0), s(0), PC_ships(17),  ker(0), colums(23), rows(13), par(10), Persons_ships(17),

   Person{
        {'O','O','O','O','O','O','O','O','O'},
        {'O','O','O','O','O','O','O','O','O'},
        {'O','O','O','O','O','O','O','O','O'},
        {'O','O','O','O','O','O','O','O','O'},
        {'O','O','O','O','O','O','O','O','O'},
        {'O','O','O','O','O','O','O','O','O'},
        {'O','O','O','O','O','O','O','O','O'},
        {'O','O','O','O','O','O','O','O','O'},
        {'O','O','O','O','O','O','O','O','O'}
    },

PC{
        {'O','O','O','O','O','O','O','O','O'},
        {'O','O','O','O','O','O','O','O','O'},
        {'O','O','O','O','O','O','O','O','O'},
        {'O','O','O','O','O','O','O','O','O'},
        {'O','O','O','O','O','O','O','O','O'},
        {'O','O','O','O','O','O','O','O','O'},
        {'O','O','O','O','O','O','O','O','O'},
        {'O','O','O','O','O','O','O','O','O'},
        {'O','O','O','O','O','O','O','O','O'}
    },


 Table{
        {' ',' ','A','B','C','D','E','F','G','H','I',' ',' ',' ','A','B','C','D','E','F','G','H','I'},
        {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
        {'1','|','O','O','O','O','O','O','O','O','O',' ','1','|','O','O','O','O','O','O','O','O','O'},
        {'2','|','O','O','O','O','O','O','O','O','O',' ','2','|','O','O','O','O','O','O','O','O','O'},
        {'3','|','O','O','O','O','O','O','O','O','O',' ','3','|','O','O','O','O','O','O','O','O','O'},
        {'4','|','O','O','O','O','O','O','O','O','O',' ','4','|','O','O','O','O','O','O','O','O','O'},
        {'5','|','O','O','O','O','O','O','O','O','O',' ','5','|','O','O','O','O','O','O','O','O','O'},
        {'6','|','O','O','O','O','O','O','O','O','O',' ','6','|','O','O','O','O','O','O','O','O','O'},
        {'7','|','O','O','O','O','O','O','O','O','O',' ','7','|','O','O','O','O','O','O','O','O','O'},
        {'8','|','O','O','O','O','O','O','O','O','O',' ','8','|','O','O','O','O','O','O','O','O','O'},
        {'9','|','O','O','O','O','O','O','O','O','O',' ','9','|','O','O','O','O','O','O','O','O','O'},
        {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
        {' ',' ',' ',' ',' ','M','Y',' ',' ',' ',' ',' ',' ',' ',' ',' ','E','N','E','M','Y',' ',' '}

    } {}




 ~Batleship() {}





void Show_Table()
{
    cout<<std::setw(30)<<endl;
    for (int i=0; i<rows; i++)
            {
                for (int j=0; j<colums; j++)
                {

                    cout<< Table[i][j];
                }
                cout<<std::setw(30)<<endl;
            }

}







void Show_Person()
{

    for (int i=0; i<par; i++)
            {
                for (int j=0; j<par; j++)
                {

                    cout<< Person[i][j];
                }
                      cout<<endl;
            }

}








void Show_PC()
{

    for (int i=0; i<par; i++)
            {
                for (int j=0; j<par; j++)
                {

                    cout<< PC[i][j];
                }
                    cout<<endl;
            }

}


//-------------------------------HUMAN-INPUT--------------------------------------------------------------------------//



int operator++()
{
    int tt;

    tt=tt+1;

    return tt;
}





void reseting_letters(char pop)
{

char* ddd = new char[6];

int* fff = new int[6];


ddd[0]=tt[0];
ddd[1]=tt[1];
ddd[2]=tt[2];
ddd[3]=tt[3];
ddd[4]=tt[4];




for(int pp=0; pp<5; pp++)
{

    if(ddd[pp]=='A')   {  fff[pp]= 0;  }
     if(ddd[pp]=='B')   {  fff[pp]= 1;}
      if(ddd[pp]=='C')   {  fff[pp]= 2; }
        if(ddd[pp]=='D')   {  fff[pp]= 3; }
          if(ddd[pp]=='E')   {  fff[pp]= 4; }
            if(ddd[pp]=='F')   {  fff[pp]= 5; }
              if(ddd[pp]=='G')   {  fff[pp]= 6;  }
                   if(ddd[pp]=='H')   {  fff[pp]= 7;}
                    if(ddd[pp]=='I')   {  fff[pp]= 8;}


}




if(pop=='1')
{
ss[1]=fff[0];
ss[3]=fff[1];
ss[5]=fff[2];
ss[7]=fff[3];
ss[9]=fff[4];
}


else if(pop=='2' || pop=='5')
{
ss[1]=fff[0];
ss[3]=fff[1];
ss[5]=fff[2];

}


else if(pop=='3' )
{
ss[1]=fff[0];
ss[3]=fff[1];
ss[5]=fff[2];
ss[7]=fff[3];

}


else if(pop=='4' )
{
ss[1]=fff[0];
ss[3]=fff[1];

}


delete [] tt;
 delete[] ddd;
  delete[] fff;


}








void reset_numbers(char pop)
{

if(pop=='1')
{
  ss[0]=ss[0]-1;
  ss[2]=ss[2]-1;
  ss[4]=ss[4]-1;
  ss[6]=ss[6]-1;
  ss[8]=ss[8]-1;


}




else if(pop=='2'|| pop=='5')
{
  ss[0]=ss[0]-1;
  ss[2]=ss[2]-1;
  ss[4]=ss[4]-1;

}




else if(pop=='3')
{
  ss[0]=ss[0]-1;
  ss[2]=ss[2]-1;
  ss[4]=ss[4]-1;
  ss[6]=ss[6]-1;

}




else if(pop=='4')
{
  ss[0]=ss[0]-1;
  ss[2]=ss[2]-1;

}


}





    void Input_Person()
    {


 bool position = false;

    char shpp;




    do {

                 Show_Table();



                    position = false;


			if (number == 0)
                {
				cout  << "Enter The Coordinate For Your Carier (5 spots): ";
				cin>>ss[0]>>tt[0]>>ss[2]>>tt[1]>>ss[4]>>tt[2]>>ss[6]>>tt[3]>>ss[8]>>tt[4];
                    shpp = '1';
                }


			else if (number == 1)
                {
				cout << "Enter The Coordinate For Your Cruiser (3 spots): ";
				cin>>ss[0]>>tt[0]>>ss[2]>>tt[1]>>ss[4]>>tt[2];
				shpp = '2';
			    }


			else if (number == 2)
                {
				cout  << "Enter The Coordinate For Your Batleship (4 spots): ";
				cin>>ss[0]>>tt[0]>>ss[2]>>tt[1]>>ss[4]>>tt[2]>>ss[6]>>tt[3];
				shpp = '3';
		     	}


			else if (number == 3)
                {
				cout  << "Enter The Coordinate For Your Destroyer (2 spots): ";
				cin>>ss[0]>>tt[0]>>ss[2]>>tt[1];
				shpp = '4';
		     	}


			else if (number == 4)
                {
				cout << "Enter The Coordinate For Your Submarine (3 spots): ";
				cin>>ss[0]>>tt[0]>>ss[2]>>tt[1]>>ss[4]>>tt[2];
				shpp = '5';
			    }




                reseting_letters(shpp);


                      reset_numbers(shpp);


                              position =  check_coordinates(shpp , ss[0], ss[1], ss[2], ss[3], ss[4], ss[5], ss[6], ss[7], ss[8], ss[9]);





			if (position == true)
                {
				number++;
				system ("CLS");
		    	}



			  if (position == false)
                {
                    system ("CLS");

				 cout<<"Bad coordinates, try again";
			    }




      } while ( number < 5);



		delete[] ss;


    }






    bool check_coordinates( char shipp, int a, int b, int c, int d, int e, int f, int g, int h, int i, int k )
    {

       if(a>8 || a<0) {return false;}
          else if(b>8 || b<0) {return false;}
             else if(c>8 || c<0) {return false;}
               else  if(d>8 || d<0) {return false;}
                else   if(e>8 || e<0) {return false;}
                   else  if(f>8 || f<0)  {return false;}
                     else  if(g>8 || g<0) {return false;}
                      else   if(h>8 || h<0) {return false;}
                        else   if(i>8 || i<0) {return false;}
                           else   if(k>8 || k<0) {return false;}


   else{




         if( shipp == '1'  && Person[a][b]=='O' && Person[c][d]=='O' && Person[e][f]=='O' && Person[g][h]=='O' && Person[i][k]=='O' &&  ( (a==c && c==e && e==g && g==i &&  ((b-d==1 && d-f==1 && f-h==1 && h-k==1) || (b-d==-1 && d-f==-1 && f-h==-1 && h-k==-1) ))  || (b==d && d==f && f==h && h==k && ((a-c==1 && c-e==1 && e-g==1 && g-i==1)||(a-c==-1 && c-e==-1 && e-g==-1 && g-i==-1))) )  )
        {
            Table[a+2][b+2]='x', Table[c+2][d+2]='x', Table[e+2][f+2]='x',Table[g+2][h+2]='x', Table[i+2][k+2]='x';
            Person[a][b]='x', Person[c][d]='x', Person[e][f]='x',Person[g][h]='x', Person[i][k]='x';
                                    return true;
        }



        else if( shipp == '2'  && Person[a][b]=='O' && Person[c][d]=='O' && Person[e][f]=='O' &&  ( (a==c && c==e &&  ((b-d==1 && d-f==1 ) || (b-d==-1 && d-f==-1) ))  || (b==d && d==f && ((a-c==1 && c-e==1)||(a-c==-1 && c-e==-1 ))) ) )
        {
            Table[a+2][b+2]='x', Table[c+2][d+2]='x', Table[e+2][f+2]='x';
            Person[a][b]='x', Person[c][d]='x', Person[e][f]='x';
                                    return true;
        }




        else  if( shipp == '3'  && Person[a][b]=='O' && Person[c][d]=='O' && Person[e][f]=='O' && Person[g][h]=='O' &&  ( (a==c && c==e && e==g &&  ((b-d==1 && d-f==1 && f-h==1) || (b-d==-1 && d-f==-1 && f-h==-1) ))  || (b==d && d==f && f==h && ((a-c==1 && c-e==1 && e-g==1)||(a-c==-1 && c-e==-1 && e-g==-1))) ) )
        {
            Table[a+2][b+2]='x', Table[c+2][d+2]='x', Table[e+2][f+2]='x',Table[g+2][h+2]='x';
            Person[a][b]='x', Person[c][d]='x', Person[e][f]='x',Person[g][h]='x';
                                   return true;
        }




          else if( shipp == '4'  && Person[a][b]=='O' && Person[c][d]=='O' &&  ( (a==c &&  ((b-d==1 ) || (b-d==-1 ) ))  || (b==d && ((a-c==1 )||(a-c==-1 ))) ) )
        {
            Table[a+2][b+2]='x', Table[c+2][d+2]='x';
            Person[a][b]='x', Person[c][d]='x';
                                    return true;
        }



         else if( shipp == '5'  && Person[a][b]=='O' && Person[c][d]=='O' && Person[e][f]=='O' &&  ( (a==c && c==e &&  ((b-d==1 && d-f==1 ) || (b-d==-1 && d-f==-1) ))  || (b==d && d==f && ((a-c==1 && c-e==1)||(a-c==-1 && c-e==-1 ))) )  )
        {
            Table[a+2][b+2]='x', Table[c+2][d+2]='x', Table[e+2][f+2]='x';
            Person[a][b]='x', Person[c][d]='x', Person[e][f]='x';
                                    return true;
        }



        else
            {
                return false;
            }





        }


    }



//------------------------------------PC-INPUT------------------------------------------------------------------------------//


 void Input_PC()
   {


       bool PC_ships = false;
          int direction;
           char shpp2;
             int* tek = new int[11];


  do
  {
      PC_ships = false;

       if (s == 0)
        {
				  direction = rand() % 2;


                       shpp2 = '1';



                                if(direction == 0)
                                {
                                    tek[0] = (rand() % 10) ;
                                      tek[2]=tek[0] , tek[4]=tek[0] , tek[6]=tek[0] , tek[8]=tek[0];

                                         tek[1] = rand() % 10;
                                          tek[3] = rand() % 10;
                                            tek[5] = rand() % 10;
                                             tek[7] = rand() % 10;
                                              tek[9] = rand() % 10;
                                }


                                   else
                                   {
                                        tek[1] = (rand() % 10);
                                          tek[3]=tek[1] , tek[5]=tek[1] , tek[7]=tek[1] , tek[9]=tek[1];

                                         tek[0] = rand() % 10;
                                          tek[2] = rand() % 10;
                                            tek[4] = rand() % 10;
                                             tek[6] = rand() % 10;
                                              tek[8] = rand() % 10;

                                   }


        }



        else if (s == 1)
        {

				    shpp2 = '2';
				 direction = rand() % 2;

                                if(direction == 0)
                                {
                                    tek[0] = (rand() % 10) ;
                                       tek[2]=tek[0] , tek[4]=tek[0] , tek[6]=tek[0];

                                         tek[1] = rand() % 10;
                                          tek[3] = rand() % 10;
                                            tek[5] = rand() % 10;

                                }



                                   else
                                   {
                                        tek[1] = (rand() % 10);
                                          tek[3]=tek[1] , tek[5]=tek[1] , tek[7]=tek[1] ;

                                         tek[0] = rand() % 10;
                                          tek[2] = rand() % 10;
                                            tek[4] = rand() % 10;
                                   }

        }


			else if (s == 2)
                {

			            	shpp2 = '3';
				        direction = rand() % 2;


				                if(direction == 0)
                                {
                                    tek[0] = (rand() % 10) ;
                                      tek[2]=tek[0] , tek[4]=tek[0] , tek[6]=tek[0];

                                         tek[1] = rand() % 10;
                                          tek[3] = rand() % 10;
                                            tek[5] = rand() % 10;
                                             tek[7] = rand() % 10;

                                }


                                   else
                                   {
                                        tek[1] = (rand() % 10);
                                          tek[3]=tek[1] , tek[5]=tek[1] , tek[7]=tek[1] ;

                                         tek[0] = rand() % 10;
                                          tek[2] = rand() % 10;
                                            tek[4] = rand() % 10;
                                             tek[6] = rand() % 10;


                                   }


			}




			else if (s == 3) {

				     shpp2 = '4';
				  direction = rand() % 2;


                                if(direction == 0)
                                {
                                    tek[0] = (rand() % 10) ;
                                     tek[2]=tek[0] , tek[4]=tek[0] ;

                                         tek[1] = rand() % 10;
                                          tek[3] = rand() % 10;

                                }
                                   else
                                   {
                                        tek[1] = (rand() % 10);
                                         tek[3]=tek[1] , tek[5]=tek[1] ;

                                         tek[0] = rand() % 10;
                                          tek[2] = rand() % 10;

                                   }


			}


		else if (s == 4)
        {

				shpp2 = '5';
				  direction = rand() % 2;

                                if(direction == 0)
                                {
                                    tek[0] = (rand() % 10) ;
                                      tek[2]=tek[0] , tek[4]=tek[0] , tek[6]=tek[0];

                                         tek[1] = rand() % 10;
                                          tek[3] = rand() % 10;
                                            tek[5] = rand() % 10;

                                }


                                else
                                {
                                        tek[1] = (rand() % 10);
                                          tek[3]=tek[1] , tek[5]=tek[1] , tek[7]=tek[1] ;

                                         tek[0] = rand() % 10;
                                          tek[2] = rand() % 10;
                                            tek[4] = rand() % 10;
                                }


			}



 PC_ships = check_PC(shpp2, tek[0], tek[1], tek[2], tek[3], tek[4], tek[5], tek[6], tek[7], tek[8], tek[9], direction);


        if(PC_ships == true)
        {
            s++;
        }



   }while(s<5);

       delete[] tek;



   }








//PC's data check-up//
 bool check_PC(char h, int as,int  bs, int cs, int  ds, int es, int  fs, int  gs, int hs, int  is, int ks, int dir )
 {


     if( h == '1'  && PC[as][bs]=='O' && PC[cs][ds]=='O' && PC[es][fs]=='O' && PC[gs][hs]=='O' && PC[is][ks]=='O' &&  ( (dir==0 &&  ((bs==1+ds && ds==1+fs && fs==1+hs && hs==1+ks) || (bs+1==ds && ds+1==fs && fs+1==hs && hs+1==ks) ))  || (dir==1 && ((as==1+cs && cs==1+es && es==1+gs && gs==1+is)||(as+1==cs && cs+1==es && es+1==gs && gs+1==is))) )  )
        {

         PC[as][bs]='x', PC[cs][ds]='x', PC[es][fs]='x',PC[gs][hs]='x', PC[is][ks]='x';

                                    return true;
        }



        else if( h == '2'  && PC[as][bs]=='O' && PC[cs][ds]=='O' && PC[es][fs]=='O' && ( (dir==0 &&  ((bs==1+ds && ds==1+fs) || (bs+1==ds && ds+1==fs) ))  || (dir==1 && ((as==1+cs && cs==1+es )||(as+1==cs && cs+1==es ))) )   )
        {

            PC[as][bs]='x', PC[cs][ds]='x', PC[es][fs]='x';
                                    return true;
        }



        else  if( h == '3'  && PC[as][bs]=='O' && PC[cs][ds]=='O' && PC[es][fs]=='O' && PC[gs][hs]=='O' && ( (dir==0 &&  ((bs==1+ds && ds==1+fs && fs==1+hs ) || (bs+1==ds && ds+1==fs && fs+1==hs ) ))  || (dir==1 && ((as==1+cs && cs==1+es && es==1+gs )||(as+1==cs && cs+1==es && es+1==gs ))) )    )
        {

            PC[as][bs]='x', PC[cs][ds]='x', PC[es][fs]='x',PC[gs][hs]='x';
                                   return true;
        }



          else if( h == '4'  && PC[as][bs]=='O' && PC[cs][ds]=='O' &&  ( (dir==0 &&  ((bs==1+ds ) || (bs+1==ds ) ))  || (dir==1 && ((as==1+cs  )||(as+1==cs  ))) )  )
        {

            PC[as][bs]='x', PC[cs][ds]='x';
                                    return true;
        }



         else if( h == '5'  && PC[as][bs]=='O' && PC[cs][ds]=='O' && PC[es][fs]=='O' && (dir==0 &&  (((bs==1+ds && ds==1+fs) || (bs+1==ds && ds+1==fs) ))  || (dir==1 && ((as==1+cs && cs==1+es )||(as+1==cs && cs+1==es ))) ) )
        {

            PC[as][bs]='x', PC[cs][ds]='x', PC[es][fs]='x';
                                    return true;
        }




        else
        {
        return false;
        }


 }


//-------------------------------------MECHANICS-------------------------------------------------------------




void fire_Person()
{

    int  x, y,sk=0, pirm, antr, par, per;
        bool yra = false;
           char z;





while(1)
{


system("CLS");



//checking if the winning criteria has been met
    if(PC_ships==0 || Persons_ships==0)
{
     system("CLS");
    break;
}





    while(1)
    {


//---------Person----------------------------------------

    yra = false;


    Show_Table();


    cout<<"Enter the bombing coordinates : ";
    cin>>x>>z;

                        y=(int(z)-int('A'));
                         x=x-1;



                        if(y>-1 && y<9 && x>-1 && x<9)
                        {
                            yra = true;
                        }


                        else
                        {
                           yra = false;
                        }




         if(yra==true)
         {
             break;
         }



         else
         {
         cout<<"Entered coordinates were invalid, try again."<<endl;

         }


    }



    if(PC[x][y]=='x')
    {
      PC[x][y]='H';
      Table[x+2][y+14]='H';
      cout<<"Hitt !"<<endl;
      ker += 10;
      PC_ships --;

    }



    else if(PC[x][y]=='O')
    {
        PC[x][y]='M';
        Table[x+2][y+14]='M';
        cout<<"Missed !"<<endl;
        ker -= 5;

    }




    else if(PC[x][y]=='H' || PC[x][y]=='M'  )
    {
        cout<<"Theese coordinates had been bombed earlier, insert other coordinates."<<endl;
        system("pause");
        fire_Person();
    }





    else
    {
    cout<<"Invalid coordinates."<<endl;
        system("pause");
        fire_Person();
    }




//checking if the winning criteria has been met
if(PC_ships==0 || Persons_ships==0)
{
     system("CLS");
    break;
}





  //-----------------PC-------------


while(1)
{




  if(sk==0)
  {


   while(1)
   {
     pirm = rand() %10;
     antr = rand() %10;


    if(Person[pirm][antr]=='O' || Person[pirm][antr]=='x' )
      {
        break;

      }

   }






    if(Person[pirm][antr]=='x')
    {
        Person[pirm][antr]='H';
        Table[pirm+2][antr+2]='H';
        Persons_ships--;
        cout<<"Enemy's hit !";
        par = pirm;
        per = antr;
        sk = 1;
        break;



    }



    else if(Person[pirm][antr]=='O' )
    {
        Person[pirm][antr]='M';
        Table[pirm+2][antr+2]='M';
        cout<<"Enemy's miss !";
        sk = 0;
         break;

    }





  }








 else if(sk==1)
 {

     if(  par+1<9 && par+1>-1)
     {
        if(Person[par+1][per]=='x')
        {
            Person[par+1][per]='H';
            Table[par+3][per+2]='H';
            cout<<"Enemy's hit !";
            Persons_ships--;
            par = par+1;
            per = per;
            sk = 1;
                break;

        }



        else if(Person[par+1][per]=='O')
        {
            Person[par+1][per]='M';
            Table[par+3][per+2]='M';
            cout<<"Enemy's miss !";
            sk = 2;
                     break;
        }

               else
               {
               sk = 2;
               }



     }



           else
          {
               sk = 2;
          }



 }



   else if(sk==2)
   {
       if(par-1>-1 && par-1<9)
       {

         if(Person[par-1][per]=='x')
         {
            Person[par-1][per]='H';
            Table[par+1][per+2]='H';
            cout<<"Enemy's hit !";
            Persons_ships--;
            par = par-1;
            per = per;
            sk = 2;
               break;

         }


         else if(Person[par-1][per]=='O')
         {
             Person[par-1][per]='M';
             Table[par+1][per+2]='M';
             cout<<"Enemy's miss !";
             sk = 3;
                   break;
         }


                        else
                        {
                        sk = 3;
                        }


       }



       else
       {
           sk =3;
       }



   }




  else if(sk==3)
  {

      if(per+1>-1 && per+1<9)
      {
          if(Person[par][per+1]=='x')
          {
            Person[par][per+1]='H';
            Table[par+2][per+3]='H';
            Persons_ships--;
            cout<<"Enemy's hit !";
            par = par;
            per = per+1;
            sk = 3;
              break;

          }


          else if(Person[par][per+1]=='O')
          {
              Person[par][per+1]='M';
              Table[par+2][per+3]='M';
              cout<<"Enemy's miss !";
              sk = 4;
                   break;

          }
                        else
                        {
                        sk = 4;
                        }


      }


          else
          {
          sk = 4;
          }



  }





    else if(sk==4)
    {
        if(per-1>-1 && per-1<9)
        {

          if(Person[par][per-1]=='x')
          {
            Person[par][per-1]='H';
            Table[par+2][per+1]='H';
            cout<<"Enemy's hit !";
            Persons_ships--;
            par = par;
            per = per+1;
            sk = 4;
              break;

          }

            else if(Person[par][per-1]=='O')
            {
                Person[par][per-1]='M';
                Table[par+2][per+1]='M';
                cout<<"Enemy's miss !";
                sk = 0;
                       break;
            }

                   else
                        {
                        sk = 0;
                        }

        }


           else
           {
           sk = 0;
            }




    }



}

system("pause");

}


}






int gg_points()
{
    return ker;
}






void conclution()
{

    if(PC_ships==0)
    {
        cout<<" has won !"<<endl;
    }



    else
    {
        cout<<" has lost !"<<endl;
    }


}

};


void add(SCORE <int> sc, SCORE <int> ss, Batleship war)
{

    if(war.gg_points()>0)
    {
        sc.get_score(war.gg_points());
    }


    else
    {
        ss.get_score(war.gg_points());
    }


}



int main()
{

Batleship war;
SCORE <int> sc;
SCORE <int> ss;
SCORE <int> finall;



    //control block//
try{

//Getting and setting data
war.get_Name();

war.Input_Person();

war.Input_PC();







//Gameplay
war.fire_Person();



//Calculating player's score
add(sc,  ss, war);

sc.get_score(war.gg_points());

finall = ss + sc;





//Showing the results
war.show_NAME();

war.conclution();

finall.show_score();




}catch(NAME::KL) {cout<<"Underage players can not play this game !"<<endl;}   //error's message//



 system("pause");

    return 0;
}
