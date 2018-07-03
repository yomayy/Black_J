#include <iostream>



using namespace std;

class Player
{
private:
    int sum;

public:

    Player()
    {
        sum = 0;
    }

    void addCard(int c)
    {
        sum += c;
    }

    int getSum()
    {
        return sum;
    }
};

class Dealer
{
private:
//vse karti
public:

    Dealer(){

    }

    int getCard()
    {
        return rand()%10+1;
    }
};

int main()
{

    Player p;
    Dealer d;
    int action = 0;

    while(1){
        cout << "Enter 1 to take card, 2 to stop, 3 to exit" << endl;
        cin >> action;

        switch(action){
        case 1:{
                int card = d.getCard();
                p.addCard(card);
                cout << "you get: " << card<<endl;
            break;
        }
        case 2:{

            int sum = p.getSum();
            if(sum>21)
            {
                cout << "you lose"<<endl;
            }else{
                cout << "you win, your sum: " << sum <<endl;
            }

         break;

        }

        case 3:
                return 0;

            break;

        default:
                cout << "Please enter 1 or 2" << endl;
            break;

        }
    }

    return 0;
}
