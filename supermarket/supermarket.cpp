#include <iostream>
#include <string>
using namespace std;

struct check {
    string nameofproduct;
    int codeofproduct;
    int quantity;
    float dollars;
    int numberitem = 0;
    float discountpercent;
    float totaldiscount;
    float  sales_taxes;
    float  sales_tax;
    float total = 0;
    float totalofitems;
    void receipt() {
        do
        {
            numberitem++;
            cout << "Number Of Item : " << numberitem << '\n';
            cout << '\n' << "    Code Of Product(Type a number over 40 to checkout and 1 to 40 to select) : ";
            cin >> codeofproduct;

            if
                (codeofproduct != 0 && codeofproduct <= 40.0 && codeofproduct >= 1.0)
            {
                inventory();
                cout << "      Name of Item : " << nameofproduct << '\n';
                cout << "      Cost of Item : " << dollars << " dollars" << '\n';
                cout << '\n' << "      Quantity : ";
                cin >> quantity;
                totalofitems = dollars * quantity;
                total = total + totalofitems;
                cout << "                      Total : " << total << '\n';
            }
            else
            {
                receiptinfo();
            }
        } while (true);
    }
    void inventory()
    {

        switch (codeofproduct)
        {
        case 1:
            nameofproduct = "Sushi";
            dollars = 1125;
            break;
        case 2:
            nameofproduct = "Corn";
            dollars = 40;
            break;
        case 3:
            nameofproduct = "Ketchup";
            dollars = 16;
            break;
        case 4:
            nameofproduct = "Oil";
            dollars = 85;
            break;
        case 5:
            nameofproduct = "Bread";
            dollars = 35;
            break;
        case 6:
            nameofproduct = "mustard";
            dollars = 20;
            break;
        case 7:
            nameofproduct = "T-Shirt";
            dollars = 210;
            break;
        case 8:
            nameofproduct = "Fish";
            dollars = 65;
            break;
        case 9:
            nameofproduct = "Shorts";
            dollars = 190;
            break;
        case 10:
            nameofproduct = "Sneakers";
            dollars = 180;
            break;
        case 11:
            nameofproduct = "Socks";
            dollars = 18;
            break;
        case 12:
            nameofproduct = "Boots";
            dollars = 89;
            break;
        case 13:
            nameofproduct = "Steak";
            dollars = 125;
            break;
        case 14:
            nameofproduct = "Cake";
            dollars = 251;
            break;
        case 15:
            nameofproduct = "Soy Sauce";
            dollars = 100;
            break;
        case 16:
            nameofproduct = "Toilet Paper";
            dollars = 40;
            break;
        case 17:
            nameofproduct = "Chocalate";
            dollars = 24;
            break;
        case 18:
            nameofproduct = "Mangoes";
            dollars = 37;
            break;
        case 19:
            nameofproduct = "Oranges";
            dollars = 23;
            break;
        case 20:
            nameofproduct = "Cereal";
            dollars = 32;
            break;
        case 21:
            nameofproduct = "Macaroni";
            dollars = 88;
            break;
        case 22:
            nameofproduct = "Yogurt";
            dollars = 16;
            break;
        case 23:
            nameofproduct = "Hamburger Buns";
            dollars = 33;
            break;
        case 24:
            nameofproduct = "Crackers";
            dollars = 30;
            break;
        case 25:
            nameofproduct = "Almond Butter";
            dollars = 109;
            break;
        case 26:
            nameofproduct = "Black caviar";
            dollars = 549;
            break;
        case 27:
            nameofproduct = "Jacket";
            dollars = 280;
            break;
        case 28:
            nameofproduct = "Pizza";
            dollars = 103;
            break;
        case 29:
            nameofproduct = "Ramen Noodles";
            dollars = 107;
            break;
        case 30:
            nameofproduct = "Nutella";
            dollars = 92;
            break;
        case 31:
            nameofproduct = "Kvas";
            dollars = 74;
            break;
        case 32:
            nameofproduct = "Grapes";
            dollars = 17;
            break;
        case 33:
            nameofproduct = "Water";
            dollars = 20;
            break;
        case 34:
            nameofproduct = "Juice";
            dollars = 93;
            break;
        case 35:
            nameofproduct = "Coconut";
            dollars = 108;
            break;
        case 36:
            nameofproduct = "Lobster";
            dollars = 350;
            break;
        case 37:
            nameofproduct = "Box of Coca cola";
            dollars = 321;
            break;
        case 38:
            nameofproduct = "Fanta";
            dollars = 11;
            break;
        case 39:
            nameofproduct = "Hats";
            dollars = 75;
            break;
        case 40:
            nameofproduct = "Wigs";
            dollars = 165;
            break;
        default:
            break;
        }
    }
    void receiptinfo() {
        cout << "                                CHECK OUT                          " << '\n' << '\n';
        cout << "Total before taxes and discounts: " << total << '\n';
        cout << '\n' << '\n';
        sales_tax = sales_taxes / 100 * total;
        cout << "sales_tax(" << sales_taxes << "%): + " << sales_tax << '\n' << '\n';
        total = total + sales_tax;
        totaldiscount = discountpercent / 100 * total;
        cout << "You Saved(" << discountpercent << "%):  -" << totaldiscount << '\n' << '\n';
        total = total - totaldiscount;
        cout << '\n' << '\n';
        cout << "End Price : " << total << " dollars" << '\n' << '\n';
        cout << "Items Purchased : " << numberitem << '\n' << '\n';

    }
    void customer() {
        cout << " % Sales Tax : ";
        cin >> sales_taxes;
        cout << " % Discount Coupon : ";
        cin >> discountpercent;
        cout << "1. Sushi - 1125" << '\n';
        cout << "2. Corn - 40" << '\n';
        cout << "3. Ketchup - 16" << '\n';
        cout << "4. Oil - 85" << '\n';
        cout << "5. Bread - 35" << '\n';
        cout << "6. Mustard - 20" << '\n';
        cout << "7. T-shirt - 210" << '\n';
        cout << "8. Fish - 65" << '\n';
        cout << "9.Shorts - 190" << '\n';
        cout << "10. Sneakers - 180" << '\n';
        cout << "11. Socks - 18" << '\n';
        cout << "12. Boots - 89" << '\n';
        cout << "13. Steak - 125" << '\n';
        cout << "14. Cake - 251" << '\n';
        cout << "15. Soy Sauce - 100" << '\n';
        cout << "16. Toilet Paper - 40" << '\n';
        cout << "17. Chocalate - 24" << '\n';
        cout << "18. Mangoes - 37" << '\n';
        cout << "19. Oranges - 23" << '\n';
        cout << "20. Cereal - 32" << '\n';
        cout << "21. Macaroni - 88" << '\n';
        cout << "22. Yogurt - 16" << '\n';
        cout << "23. Hamburger Buns - 33" << '\n';
        cout << "24. Crackers - 30" << '\n';
        cout << "25. Amond butter - 109" << '\n';
        cout << "26. Black Caviar - 549" << '\n';
        cout << "27. Jacket - 280" << '\n';
        cout << "28. Pizza - 103" << '\n';
        cout << "29. Ramen Noodles - 107" << '\n';
        cout << "30. Nutella - 92" << '\n';
        cout << "31. Kvas - 74" << '\n';
        cout << "32. Grapes - 17" << '\n';
        cout << "33. Water - 20" << '\n';
        cout << "34. Juice - 93" << '\n';
        cout << "35. Coconut - 108" << '\n';
        cout << "36. Lobster - 350" << '\n';
        cout << "37. Box of Coca Cola - 321" << '\n';
        cout << "38.Fanta - 11" << '\n';
        cout << "39.Hats - 75" << '\n';
        cout << "40. Wigs - 165" << '\n';
    }
};
int main() {
    string password;
    for (int attempt = 0; attempt < 3; attempt++)
    {
        cout << "Please enter your password.(type 'penguin')\n";
        cin >> password;
        if (password == "penguin")
            do
            {
                cout << '\n' << '\n' << "                                                             CHECK FROM SUPERMARKET                                                        " << '\n' << '\n';
                cout << "Thanks for shopping with us!!!! Here is your receipt. Please enter your states sales taxes followed by your discount coupon" << '\n';
                check components;
                components.customer();
                components.receipt();
            } while (true);
        else
            cout << "Reenter" << '\n';
    }
    system("pause");
    return 0;
}