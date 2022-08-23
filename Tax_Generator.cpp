// This is a Simple progrmme to generator the tax as simple as possible.
// User needs to input their income

#include <iostream>
using namespace std;

int rate_01 = 0; 
int rate_02 =10;
int rate_03 =20;
int rate_04 =30;
int rate_05 =40;
int rate_06 =50;
int change = 0;  




int get_persentage(int income){
	if(income <= 10000)
		return rate_01;
	if(income <= 30000)
		return rate_02;
	if(income <= 50000)
		return rate_03;
	if(income <= 70000)
		return rate_04;
	if(income <= 100000)
		return rate_05;
	if(income > 100000)
		return rate_06;	
	return 0;				
}

int coin_selector(int tax_payble){
	int change =0;
	int result_01,result_02,result_03,result_04,result_05,result_06,result_07,result_08;
	int change01,change02,change03,change04,change05,change06,change07,change08;
	
	if (tax_payble >= 5000){	
		change01 =tax_payble % 5000; 
	    int result_01 =tax_payble / 5000 ;
	    cout << endl;
		cout<< "5000 : " << result_01 << endl;   
	}
	if (change01<5000){
		change02 =change01 % 1000; 
	    int result_02 =change01 / 1000;
	    cout << endl;
		cout<< "1000 : " << result_02 << endl; 
	}
	if (change02<1000){
		change03 =change02 % 500; 
	    int result_03 =change02 / 500;
	    cout << endl;
		cout<< " 500 : " << result_03 << endl;  
	}	
	if (change03<500){
		change04 =change03 % 100; 
	    int result_04 =change03 / 100;
	    cout << endl;
	    cout<< " 100 : " << result_04 << endl; 
	}	
	if (change04<100){
		change05 =change04 % 50; 
	    int result_05 =change04 / 50;  
		cout << endl; 
		cout<< "  50 : " << result_05 << endl;
	}	
	if (change05<50){
		change06 =change05 % 10; 
	    int result_06 =change05 / 10; 
	    cout << endl; 
		cout<< "  10 : " << result_06 << endl;   
	}	
	if (change06<10){
		change07 =change06 % 5; 
	    int result_07 =change06 / 5;    
	    cout << endl; 
	    cout<< "   5 : " << result_07 << endl;
	}	
	if (change07 <5){
		change08 =change07 % 1; 
	    int result_08 =change07 / 1;    
		cout << endl;
		cout<< "   1 : " << result_08 << endl;
	}    
		

	
 return 0;
}


int main(){
	int income;

	cout << "Enter Your Income " << endl;									// get users income
	cin >> income;														
	int tax_payble;
	if (get_persentage(income)==rate_01){									// get the persentage calculated		
		tax_payble = income*rate_01/100;
		cout<< "Your tax payable is "<< tax_payble << endl; 
	}
		if (get_persentage(income)==rate_02){
		tax_payble = income*rate_02/100;
		cout<< "Your tax payable is "<< tax_payble << endl ;
	}
		if (get_persentage(income)==rate_03){
		tax_payble = income*rate_03/100;
		cout<< "Your tax payable is "<< tax_payble << endl;
	}
		if (get_persentage(income)==rate_04){
		tax_payble = income*rate_04/100;
		cout<< "Your tax payable is "<< tax_payble << endl;
	}
		if (get_persentage(income)==rate_05){
		tax_payble = income*rate_05/100;
		cout<< "Your tax payable is "<< tax_payble << endl;
	}
		if (get_persentage(income)==rate_06){
		tax_payble = income*rate_06/100;
		cout<< "Your tax payable is "<< tax_payble << endl;
	}
	cout<< "You can pay with " << endl;
	coin_selector(tax_payble);
	return 0;	
}