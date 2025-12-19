#include <iostream>
using namespace std;

int main()
{
    int total1 , total2, roll_no ,pracC , pracB , pracP , urdu1 , english1 , biology1 , chemistry1 , physics1 , islamiat , TQ1 , urdu2 , english2 , biology2 , chemistry2 , physics2 , pakstudies , TQ2 ;
    string gradeU , gradeE , gradeB , gradeI , gradeP , gradeT , gradeC , gradePh , name, father , grade2 , statusU ,statusE ,statusB ,statusPh , statusP , statusT ,statusC , statusI ,statusf,sp , sb , sc ;

 cout<< "Roll Number :";
 cin>> roll_no ;
 cout<< " Name : " ;
 cin>> name ;
 cout<< " Father's Name : " ;
 cin>> father ;
 cout<< " \n 1st Year Marks \n " ;
 cout<<"Urdu : " ;
 cin>> urdu1 ;
 cout<< " English : " ;
 cin>> english1 ;
 cout<< " Biology : " ;
 cin>> biology1 ;
 cout<< " Chemistry : " ;
 cin>> chemistry1 ;
 cout<< " Physics : " ;
 cin>> physics1 ;
 cout<< " Islamiat : " ;
 cin>> islamiat ;
 cout<< " Translation of Holy Qura'n:" ;
 cin>> TQ1 ;
 total1 = urdu1 + english1 + biology1 + chemistry1 + physics1 + islamiat  + TQ1 ;
 float per = (total1 * 100)/ 505 ;
 cout<< "\n 2nd Year Marks \n" ;
 cout<< " Urdu : " ;
 cin>> urdu2 ;
 cout<< " English : " ;
 cin>> english2 ;
 cout<< " Biology : " ;
 cin>> biology2 ;
 cout<< " Chemistry : " ;
 cin>> chemistry2 ;
 cout<< " Physics : " ;
 cin>> physics2 ;
 cout<< " Pak Studies : " ;
 cin>> pakstudies ;
 cout<< " Translation of Holy Qura'n:" ;
 cin>> TQ2 ;
 cout<< "Practicals" <<endl ;
 cout<< " Chemistry :" ;
 cin>>pracC ;
 cout<< " Biology : " ;
 cin>> pracB ;
 cout<< " physics : ";
 cin>> pracP ;
 if (pracC >= 15 && pracC <= 30 ) 
   {
      sp =  " Pass " ;
   }
 else if (pracC >= 0 && pracC <= 14)
    {
      sp = " Fail " ;
    }
 else 
  {
      sp = "Invalid " ;
  }
 if (pracB >= 15 && pracB <= 30 ) 
    {
        sb =  " Pass " ;
    }
 else if (pracB >= 0 && pracB <= 14)
    {
         sb = " Fail " ;
    }
 else
    {
        sb = "Invalid " ;
    }
     if (pracP >= 15 && pracP <= 30 ) 
    {
        sc =  " Pass " ;
    }
 else if (pracP >= 0 && pracP <= 14)
    {
        sc = " Fail " ;
    }
 else
    {
        sc = "Invalid " ;
    }
       float totalU = urdu1+urdu2 ;
       float perU = (totalU*100)/200 ;
 if (perU >= 85)
    { 
        gradeU =" A+ ",statusU = " Pass " ;
    }
    else if (perU >= 75)
    {
         gradeU = "  A ",statusU = " Pass " ;
    }
    else if (perU >= 65)
    {
        gradeU =" B " ,statusU = " Pass ";
    }
    else if (perU >= 50)
    {
         gradeU = " C ",statusU = " Pass " ;
    }
    else
    {
          gradeU =" F " ,statusU = " Fail ";
    }
       float totalE = english1 + english2 ;
       float perE = (totalE*100)/200 ;
 if (perE >= 85)
    { 
        gradeE = " A+ " ,statusE = " Pass " ;
    }
    else if (perE >= 75)
    {
        gradeE ="  A " ,statusE = " Pass ";
    }
    else if (perE >= 65)
    {
        gradeE = " B " ,statusE = " Pass ";
    }
    else if (perE >= 50)
    {
        gradeE = " C " ,statusE = " Pass ";
    }
    else
    {
        gradeE = " F " ,statusE = " Fail ";
    }
       float totalB = biology1 + biology2 + pracB ;
       float perB = (totalB*100)/200 ;
 if (perB >= 85)
    { 
        gradeB = " A+ " ,statusB = " Pass ";
    }
    else if (perB >= 75)
    {
        gradeB =  "  A ",statusB = " Pass " ;
    }
    else if (perB >= 65)
    {
        gradeB =  " B ",statusB = " Pass " ;
    }
    else if (perB >= 50)
    {
        gradeB =  " C " ,statusB = " Pass ";
    }
    else
    {
        gradeB =  " F " ,statusB = " Fail ";
    }
      float totalI = islamiat ;
      float perI = (totalI*100)/50 ;
 if (perI >= 85)
    { 
        gradeI = " A+ ",statusI = " Pass ";
    }
    else if (perI >= 65)
    {
        gradeI = " B ",statusI = " Pass " ;
    }
    else if (perI >= 50)
    {
        gradeI = " C ",statusI = " Pass " ;
    }
    else
    {
        gradeI = " F " ,statusI = " Fail ";
    }
       float totalP = pakstudies ;
       float perP = (totalP*100)/50 ;
 if (perP >= 85)
    { 
        gradeP = " A+ ",statusP = " Pass " ;
    }
    else if (perP >= 75)
    {
        gradeP = "  A ",statusP = " Pass " ;
    }
    else if (perP >= 65)
    {
        gradeP = " B ",statusP = " Pass " ;
    }
    else if (perP >= 50)
    {
        gradeP = " C ",statusP = " Pass " ;
    }
    else
    {
        gradeP = " F ",statusP = " Fail " ;
    }
      float totalT = TQ1 + TQ2 ;
      float perT = (totalT*100)/100 ;
 if (perT >= 85)
    { 
        gradeT = " A+ ",statusT = " Pass " ;
    }
    else if (perT >= 75)
    {
        gradeT = "  A ",statusT = " Pass " ;
    }
    else if (perT >= 65)
    {
        gradeT = " B ",statusT = " Pass " ;
    }
    else if (perT >= 50)
    {
        gradeT = " C ",statusT = " Pass " ;
    }
    else
    {
        gradeT = " F " ,statusT = " Fail ";
    }
     float totalPh = physics1 + physics2 + pracP ;
     float perPh = (totalPh*100)/200;
 if (perPh >= 85)
    { 
        gradePh = " A+ " ,statusPh = " Pass ";
    }
    else if (perPh >= 75)
    {
        gradePh = "  A ",statusPh = " Pass " ;
    }
    else if (perPh >= 65)
    {
        gradePh = " B ",statusPh = " Pass " ;
    }
    else if (perPh >= 50)
    {
        gradePh = " C " ,statusPh = " Pass ";
    }
    else
    {
        gradePh = " F ",statusPh = " Fail " ;
    }
     float totalC = chemistry1 + chemistry2 + pracC ;
     float perC = (totalC*100)/200 ;
 if (perC >= 85)
    { 
        gradeC = " A+ ",statusC = " Pass " ;
    }
    else if (perC >= 75)
    {
        gradeC = "  A ",statusC = " Pass " ;
    }
    else if (perC >= 65)
    {
        gradeC = " B ",statusC = " Pass " ;
    }
    else if (perC >= 50)
    {
        gradeC = " C ",statusC = " Pass " ;
    }
    else
    {
        gradeC = " F ",statusC = " Fail " ;
    }
      total2 = urdu2 + english2 + biology2 + chemistry2 + physics2 + pakstudies + TQ2 + pracB + pracC + pracP ;
      float per2 = (total2 *100)/600 ; 
    cout<< "\n\n" ;
      float total = 1200 ;
      float obtained_Marks = total1 + total2 ;
      float per3 = (obtained_Marks *100) / total ;
      string a , overallresult;
  
    if (per3 >= 85)
    { 
        a = " A+ ",statusf = " Pass " ;
    }
    else if (per3 >= 75)
    {
        a = " A ",statusf = " Pass " ;
    }
    else if (per3 >= 65)
    {
        a = " B " ,statusf = " Pass ";
    }
    else if (per3 >= 50)
    {
        a = " C " ,statusf = " Pass ";
    }
    else
    {
        a = " F " ,statusf = " Fail ";
    }
     if (per3 >= 85)
    { 
        overallresult = "\033[1m < The candidate has passed his/her examination > \033[0m\033[0m" ;
    }
    else if (per3 >= 75)
    {
        overallresult = "\033[1m < The candidate has passed his/her examination > \033[0m\033[0m" ;
    }
    else if (per3 >= 65)
    {
        overallresult = "\033[1m< The candidate has passed his/her examination > \033[0m\033[0m" ;
    }
    else if (per3 >= 50)
    {
        overallresult = "\033[1m< The candidate has passed his/her examination > \033[0m\033[0m" ;
    }
    else
    {
        overallresult = "\033[1m< The candidate has failed his/her examination > \033[0m\033[0m" ;
    }
    cout<<"\n"<<endl;

    cout << "\033[1m===================================================================================================================\033[0m\n\n";
    cout << "\t\t\033[1mBOARD OF INTERMEDIATE AND SECONDARY EDUCATION, SAHIWAL\033[0m\n\n";

    cout << "   Result: \033[1m\033[4mPASS\033[0m\t\t\t\t\t\t Roll No. " <<roll_no<< "\n";

    cout << "\t\t\t\t\t\t Registration No. \033[1m3456787653\033[0m\n\n";
    cout << "\t\t\t\033[1mPROVISIONAL RESULT INTIMATION\033[0m\n";
    cout << "\t\tINTERMEDIATE PART (I/II) 1st ANNUAL EXAMINATION, 2024\n";
    cout << "\t\t\t   GROUP \033[4mPRE-MEDICAL\033[0m\n\n";

    cout << "\033[1mNAME :\033[0m " <<name<< "\n" ;

    cout << "__________________________________________________________________________________________\n";

    cout << "\033[1mFATHER'S NAME :\033[0m " <<father<< "\n" ;

    cout << "__________________________________________________________________________________________\n";
    cout << "\033[1mINSTITUTION/DISTRICT:\033[0m \033[4mPAKPATTAN\033[0m\n\n";

    cout << "Has secured the marks as detail below against each subject:\n";
    cout << "______________________________________________________________________________________________________________________|\n\n";
cout << "| Sr |       Subject        | Max Marks |  11th  |  12th  | Prac  | Total | Percentile | Grade |  Status  | Practical |\n";
cout << "______________________________________________________________________________________________________________________|\n\n";

cout << "| 1  | Urdu                 |    200    |  "   <<urdu1<<   "    |  "   <<urdu2<<  "    |  --   |  " << totalU  << "  |     " << perU  << "     |  " << gradeU  << "  |  " << statusU  << "  |     -     |\n";
cout << "______________________________________________________________________________________________________________________|\n\n";

cout << "| 2  | English              |    200    |  "  <<english1<< "    |  " <<english2<<  "    |  --   |  " << totalE  << "  |     " << perE  << "     |  " << gradeE  << "  |  " << statusE  << "  |     -     |\n";
cout << "______________________________________________________________________________________________________________________|\n\n";

cout << "| 3  | Islamic Studies      |     50    |  " <<islamiat<<  "    |  --    |  --   |  " << totalI << "   |     " << perI  << "     |  " << gradeI  << " |  " << statusI  << "  |     -     |\n";
cout << "______________________________________________________________________________________________________________________|\n\n";

cout << "| 4  | Pakistan Studies     |     50    |  --    |   "<<pakstudies<< "   |  --   |  " << totalP << "   |     " << perP  << "     |  " << gradeP  << " |  " << statusP  << "  |     -     |\n";
cout << "______________________________________________________________________________________________________________________|\n\n";

cout << "| 5  | Translation / HQ     |    100    |  "    <<TQ1<<    "    |  "     <<TQ2<<    "    |  --   |  " << totalT << "   |     " << perT  << "     |  " << gradeT  << " |  " << statusT  << "  |     -     |\n";
cout << "______________________________________________________________________________________________________________________|\n\n";

cout << "| 6  | Physics              |    200    |  "  <<physics1<< "    | "  <<physics2<<  "    |  " << pracP  << "   |  " << totalPh << "   |     " << perPh << "   |  " << gradePh << " |  " << statusPh << "  |   " << sc  << "  |\n";
cout << "______________________________________________________________________________________________________________________|\n\n";

cout << "| 7  | Chemistry            |    200    |  " <<chemistry1<<"    | " <<chemistry2<<"    |  " << pracC  << "   |  " << totalC  << "   |     " << perC  << "   |  " << gradeC  << " |  " << statusC  << "  |   " << sp  << "  |\n";
cout << "______________________________________________________________________________________________________________________|\n\n";

cout << "| 8  | Biology              |    200    |  " <<biology1<<  "    | " <<biology2<<  "    |  " << pracB  << "   |  " << totalB  << "   |    " << perB  << "    |  " << gradeB  << "  |  " << statusB  << " |   " << sb  << "  |\n";
cout << "______________________________________________________________________________________________________________________|\n\n";

cout << "|      TOTAL                |   1200    |        |        |       |  " << obtained_Marks << "  |  " << per3 << "   |  " << a << "  |  "<<statusf<<"  |           |\n";
cout << "______________________________________________________________________________________________________________________|\n\n";

    cout<< " \t\t\t"  <<overallresult<< "\n\n" ;

    return 0;
}
