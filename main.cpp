#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

const int SIZE = 3;

class Chair
{
    private:
    int legs;
    double* prices;
    public:
    Chair()
    {
        prices = new double[SIZE];
        legs = rand() % 2 + 3;

        const int MIN = 10000, Max = 99999;
        for (int i = 0; i < SIZE; i++)
        {
            prices[i] = (rand() % (Max - MIN + 1) + MIN) / (double)100;
    
        }
    }
    ~Chair(int 1, double p[])
    {
        prices = new double[SIZE];
        legs =1;
        for (int i = 0; i < SIZE; i++)
        {
            prices[i] = p[i];
        }   
    }

    void setLegs(int 1)
    {
        legs = 1;
    }
    int getLegs()
    {
        return legs;
    }
    void setPrices(double p1, double p2, double p3)
    {
        prices[0] = p1;
        prices[1] = p2;
        prices[2] = p3;
    }
    double getAveragePrices()
    {
        double sum = 0;
        for (int i = 0; i < SIZE; i++)
        {
            sum += prices[i];
        }
        return sum / SIZE;
    }
    void print() 
    {
        cout << "CHAIR DATA - legs: " << legs << endl;
        cout << "Price history: ";
        for (int i =0; i < SIZE; i++)
        {
            cout << "$" << prices[i] << " ";
        }
        cout << endl;
        cout << "Historical avg price: $" << getAveragePrices() << endl;
        cout << endl;   
    }
    ~Chair()
    {
        delete[] prices;
    }
};

int main()
{ srand(time(0));
    cout << fixed << setprecision(2);
    cout << "CHAIR 1 - DEFAULT CONSTRUCTOR" << endl;
    Chair* chairPtr = new Chair();
    chairPtr->print();
    cout << "CHAIR 2 - PARAMETER CONSTRUCTOR" << endl;
    double chairPrices[SIZE] = {525.25, 434.34, 252.52};
    Chair* livingChair = new Chair(3, chairPrices);
    livingChair->print();
    cout << "CHAIR COLLECTION - DEFAULT CONSTRUCTOR" << endl;
    Chair* collection = new Chair*[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Chair #" << i + 1 << endl;
        collection[i].print();

    }

    return 0;




}
