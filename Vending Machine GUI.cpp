#include <iostream>

using namespace std;

int main()
{
    enum {ENTER$, WAITSEL, CHECKINV, RETURN}; 
    int sodacost = 75; 
    int coke = 2; 
    int sprite = 2;
    int state = ENTER$; 
    int total;
    int money;
    int change; 
    int soda;
    int refund;

    while(true){
        switch(state)
        {
            case ENTER$: 
            while(true)
            {
            cout << "Enter amount of money or enter 3 to return: ";
            cin >> money;
            
            if (money == 3) {state = RETURN; break;}
            total += money;
            if (total >= sodacost) {state = WAITSEL; break;}
            }
            break;
            
        
            case WAITSEL: 
            change = total - sodacost; 
            total = total - change; 
            cout << "Change is: " << change << endl; 
            soda = 0;
            cout << "Enter soda type (1 for coke, 2 for sprite or 3 to return money): "; 
            int soda;
            cin >> soda;
            if (soda == 1 || soda == 2) {state = CHECKINV; break;}
            if (soda = 3) {state = RETURN;}
            break;
            
            
            case CHECKINV: 
            
            if (coke == 0 && sprite == 0)
            {
                cout << "There are no more drinks" << endl; 
                {state = RETURN;}
                break;
            }
            
            if (soda == 1)
            {
                if (coke > 0)
                {
                    cout << "Soda selected: coke" << endl; 
                    cout << "Coke dispensed" << endl;
                    {state = ENTER$;}
                    coke--;
                    total = 0;
                    change = 0; 
                    break;
                    
                }
                else 
                {
                    cout << "Coke is out of stock, select another soda." << endl;
                    {state = WAITSEL;}
                    break;
                }                
            }

           
            if (soda == 2) 
            {
                if (sprite > 0)
                {
                    cout << "Soda selected: spirte" << endl; 
                    cout << "Sprite dispensed" << endl;
                    {state = ENTER$;}
                    sprite--;
                    total = 0;
                    change = 0; 
                    break;
                }
                else 
                {
                    cout << "Sprite is out of stock, select another soda." << endl;
                    {state = WAITSEL;}
                    break;
                }
            }
            
            break; 
            
            case RETURN:
            if (money >= sodacost && coke > 0 || sprite > 0 && total < 25) 
            {
                refund = money - sodacost;
                cout << "Returns is: " << refund << endl;
            }
            if (money < sodacost && total > 0) 
            {
                total = total;
                cout << "Return is: " << total << endl;
            }
            if (coke == 0 && sprite == 0)
            {
                cout << "Return is: " << total << endl; 
            }
           
            {state = ENTER$;}
            total = 0;
            change = 0;
            break;
            
        }   
    }
    return 0;
    
}




















