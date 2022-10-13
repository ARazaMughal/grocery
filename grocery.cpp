#include <iostream>
#include <curses.h>
#include <stdio.h>
#include <string>
using namespace std;
class person{
    protected:
    string name;
    int age=0;
    public:
    int budget=0;
    void input(){
        cout<<"\tCreat Account\n";
        cout<<"Enter Your Name :";
        getline (cin, name);
        cout<<"Enter your age :";
        cin>>age;
        cout<<"Enter your budget :Rs.";
        cin>>budget;
    }
    void disp(){
    cout<<"\n\tWelcome "<<name<<" to our Grocery Store "<<endl;
    }
};
class store:public person{
    private:
    string proname;
    public:
    string cartname="",cartname2="",name;
    int appleqnt=0,mangoqnt=0,bananaqnt=0,orangeqnt=0,potatoqnt=0,onionqnt=0,carrotqnt=0,tomatoqnt=0;
    int total=0,cartquant=0,size=1,quantity;
    int tpapple=0,tporange=0,tpbanana=0,tpmango=0,tppotato=0,tponion=0,tpcarrot=0,tptomato=0;
    void show(){
    cout<<"What would you like to buy?"<<endl; 
    cout<<"\n1.Fruits\t2.Vegetables"<<endl;
    cout<<"Enter Product id/name :";
    cin>>proname;
        if(proname=="1"||proname=="fruits"||proname=="Fruits"){
            fruits();
        }
        if(proname=="2"||proname=="vegetables"||proname=="Vegetables"){
            veg();
        }
        }
    void fruits(){
        string fruitname,dispname;
        cout<<"\n Fruit  \tPrice"<<endl;
        cout<<"1.Apple \tRs.100/kg"<<endl;
        cout<<"2.Orange\tRs.15/item"<<endl;
        cout<<"3.Banana\tRs.10/item"<<endl;
        cout<<"4.Mango \tRs.150/kg"<<endl;
        cout<<"Enter Fruit id/name : ";
        cin>>fruitname;
        cout<<"Enter Quantity: ";
        cin>>quantity;
        if (fruitname=="1"||fruitname=="apple"||fruitname=="Apple") {
            tpapple=quantity*100;
            appleqnt=quantity;
            dispname="Apple";
        }
        if (fruitname=="2"||fruitname=="orange"||fruitname=="Orange"){
            tporange=quantity*15;
            dispname="Orange";
            orangeqnt=quantity;
            }
        if (fruitname=="3"||fruitname=="Banana"||fruitname=="banana") {
            tpbanana=quantity*10;
            dispname="Banana";
            bananaqnt=quantity;
        }
        if (fruitname=="4"||fruitname=="mango"||fruitname=="Mango"){
            tpmango=quantity*150;
            dispname="Mango";
            mangoqnt=quantity;  
        }
        cout<<dispname<<" Added to your cart "<<endl;
        morefruits();
    }
    void morefruits(){
    string ch;
    cout<<"\nDo you want to buy more fruits? (y/n) ";
    cin>>ch; 
    while (ch=="y"||ch=="Y"){
        fruits();
        size=size+1;
        break;
        cout<<"\nDo you want to buy more fruits? (y/n) ";
        cin>>ch;       
    }
    }
    void qartshow(){
        // cout<<cartname<<"\t"<<cartquant<<endl;
        cout<<"Item Name\tQuantity\tPrice"<<endl;
    if (appleqnt>0){
        total=total+tpapple;
        cout<<"Apple\t\t"<<appleqnt<<" kg"<<"\t\tRs. "<<tpapple<<endl; 
    }
    if (orangeqnt>0){
        total=total+tporange;
        cout<<"Orange\t\t"<<orangeqnt<<" pcs"<<"\t\tRs. "<<tporange<<endl;
    }
     if (bananaqnt>0){
        total=total+tpbanana;
        cout<<"Banana\t\t"<<bananaqnt<<" pcs"<<"\t\tRs. "<<tpbanana<<endl;
    }
     if (mangoqnt>0){
        total=total+tpmango;
        cout<<"Mango\t\t"<<mangoqnt<<" kg"<<"\t\tRs. "<<tpmango<<endl;
    }
    if (potatoqnt>0){
        total=total+tppotato;
        cout<<"Potato\t\t"<<potatoqnt<<" kg"<<"\t\tRs. "<<tppotato<<endl;
    }
    if (onionqnt>0){
        total=total+tponion;
        cout<<"Onion\t\t"<<onionqnt<<" kg"<<"\t\tRs. "<<tponion<<endl;
    }
    if (carrotqnt>0){
        total=total+tpcarrot;
        cout<<"Carrots\t\t"<<carrotqnt<<" kg"<<"\t\tRs. "<<tpcarrot<<endl;
    }
    if (tomatoqnt>0){
        total=total+tptomato;
        cout<<"Tomato\t\t"<<tomatoqnt<<" kg"<<"\t\tRs. "<<tptomato<<endl;
    }
    cout<<"\nTotal bill:\t Rs. "<<total;

    }
     void qartshow2(){
        cout<<"Item Name\tQuantity\tPrice"<<endl;
    if (appleqnt>0){
        cout<<"Apple\t\t"<<appleqnt<<" kg"<<"\t\tRs. "<<tpapple<<endl; 
    }
    if (orangeqnt>0){
        cout<<"Orange\t\t"<<orangeqnt<<" pcs"<<"\t\tRs. "<<tporange<<endl;
    }
     if (bananaqnt>0){
        cout<<"Banana\t\t"<<bananaqnt<<" pcs"<<"\t\tRs. "<<tpbanana<<endl;
    }
     if (mangoqnt>0){
        cout<<"Mango\t\t"<<mangoqnt<<" kg"<<"\t\tRs. "<<tpmango<<endl;
    }
    if (potatoqnt>0){
        cout<<"Potato\t\t"<<potatoqnt<<" kg"<<"\t\tRs. "<<tppotato<<endl;
    }
    if (onionqnt>0){
        cout<<"Onion\t\t"<<onionqnt<<" kg"<<"\t\tRs. "<<tponion<<endl;
    }
    if (carrotqnt>0){
        cout<<"Carrots\t\t"<<carrotqnt<<" kg"<<"\t\tRs. "<<tpcarrot<<endl;
    }
    if (tomatoqnt>0){
        cout<<"Tomato\t\t"<<tomatoqnt<<" kg"<<"\t\tRs. "<<tptomato<<endl;
    }
    cout<<"\nTotal bill:\t Rs. "<<total;
    }
    void veg(){
        string vegnames,dispname;
        cout<<"\n Vegetables  \tPrice"<<endl;
        cout<<"1.Potato \tRs.20/kg"<<endl;
        cout<<"2.Onions\tRs.15/kg"<<endl;
        cout<<"3.Carrots\tRs.10/kg"<<endl;
        cout<<"4.Tomato \tRs.30/kg"<<endl;
        cout<<"Enter Vegetable id/name : ";
        cin>>vegnames;
        cout<<"Enter Quantity (kg): ";
        cin>>quantity;
        if (vegnames=="1"||vegnames=="Potato"||vegnames=="potato"){
            dispname="Potato";
            tppotato=quantity*40;
            potatoqnt=quantity;
        }
        if (vegnames=="2"||vegnames=="Onions"||vegnames=="onions"){
            dispname="Onions";
            tponion=quantity*30;
            onionqnt=quantity;
        }
        if (vegnames=="3"||vegnames=="Carrots"||vegnames=="carrots"){
            dispname="Carrots";
            tpcarrot=quantity*50;
            carrotqnt=quantity;
        }
        if (vegnames=="4"||vegnames=="Tomato"||vegnames=="tomato"){
            dispname="Tomato";
            tptomato=quantity*80;
            tomatoqnt=quantity;
        }
        cout<<dispname<<" Added to your cart "<<endl;
        moreveg();
    }
    void moreveg(){
    string ch;
    cout<<"\nDo you want to buy more Vegetables? (y/n) ";
    cin>>ch;
    while (ch=="y"||ch=="Y"){
        veg();
        break;
        cout<<"\nDo you want to buy more Vegetables? (y/n) ";
        cin>>ch;
    }
    }
    void remove(){
        string ch,rmname;
        cout<<"What do you want to Remove?"<<endl;
        cout<<"\n\tYour Cart"<<endl;
        qartshow2();
        cout<<"\nEnter item name to remove: ";
        cin>>rmname;
        if(rmname=="apple"){
            appleqnt=appleqnt-appleqnt;
            total=total-tpapple;
        }
         if(rmname=="orange"){
            orangeqnt=orangeqnt-orangeqnt;
            total=total-tporange;
        }
         if(rmname=="banana"){
            bananaqnt=bananaqnt-bananaqnt;
            total=total-tpbanana;
        }
         if(rmname=="mango"){
            mangoqnt=mangoqnt-mangoqnt;
            total=total-tpmango;
        }
        if(rmname=="potato"){
            potatoqnt=potatoqnt-potatoqnt;
            total=total-tppotato;
            }
        if(rmname=="onion"){
            onionqnt=onionqnt-onionqnt;
            total=total-tponion;
        }
        if(rmname=="carrot"){
            carrotqnt=carrotqnt-carrotqnt;
            total=total-tpcarrot;
        }
        if(rmname=="tomato"){
            tomatoqnt=tomatoqnt-tomatoqnt;
            total=total-tptomato;
        }
    cout<<"\n\tYour cart after item removed:"<<endl;
         qartshow2();
    }
};
int main(){
    string ch;
    store st;
    st.input();
    st.disp();
    st.show();
    string itemname=st.name;
    int quant=st.quantity;
    int size=st.size;
    cout<<"\nDo you want to buy more items? (y/n)";
    cin>>ch;
    while(ch=="y"||ch=="y")
    {
        st.show();
        cout<<"\nDo you want to buy more items? (y/n) ";
        cin>>ch;
    }
    cout<<"\n\tYour Cart"<<endl;   
    st.qartshow();
    while (st.total>st.budget)
    {
        cout<<"\n\nYour bill is more than your budget!\nYou need to remove some items:\n";
        st.remove();
    }
    if (st.total<st.budget)
    {
        cout<<"\nDo you want to remove any item? (y/n)";
        cin>>ch;
        if (ch=="y"||ch=="Y")
        {
        st.remove();
        }    
    }
    return 0;
}