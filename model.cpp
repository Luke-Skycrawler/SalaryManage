#include "model.h"
using namespace std;
inline float after_tax(float salary){
    float tax;
    if(salary<36000)
        tax=salary*0.03f;
    else if(salary<144000)
        tax=(salary-36000)*0.1f+2520;
    else if(salary<300000)
        tax=(salary-144000)*0.2f+16920;
    else if(salary<420000)
        tax=(salary-144000)*0.25f+31920;
    else if(salary<660000)
        tax=(salary-144000)*0.3f+52920;
    else if(salary<960000)
        tax=(salary-144000)*0.35f+85920;
    else tax=(salary-960000)*0.45f+181920;
    return salary-tax;
}
// float worker::get_net_salary_total(){
//     return wage+overtime+bonus;
// }
// float management::get_net_salary_total(){
//     return bonus+motivation;
// }
// float tech::get_net_salary_total(){
//     return bonus+skill+project_budget;
// }
// float sales::get_net_salary_total(){
//     return  bonus+sales_compensation;
// }
void employee::print_salary_detail(QTableWidget &display){
    for(int i=0;i<2;i++)
        for(int j=0;j<4;j++){
            if(display.item(j,i))
            display.item(j,i)->setData(0,i);
            else display.setItem(j,i,new QTableWidgetItem(QString::number(j)));
        }
}
float employee::salary_taxed(){
    //return after_tax(get_net_salary_total());
}

employee::employee(QSqlRecord &record)
    :sex(record.value("sex").toUInt()),name(record.value("name").toString()),dept(record.value("department").toString()),phone(record.value("phone number").toString()){

}
management::management(QSqlRecord &record):employee(record){}
tech::tech(QSqlRecord &record):employee(record){}
sales::sales(QSqlRecord &record):employee(record){}
worker::worker(QSqlRecord &record):employee(record){}
#ifdef _DEBUG_0
int main(void){
    worker z3();
    
    return 0;
}
#endif
