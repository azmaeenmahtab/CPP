#include<bits/stdc++.h>
using namespace std;
int main(){
    long n, m, a, b;
    cin >> n >> m >> a >> b;
 
        long no_of_mride_tickets = n / m;
 
        long no_of_one_ride_tickets = n % m;
 
        long totaltickets = (n / m) + (n % m);
 
        if(n % m == 0){
 
            long fare_with_mride_ticket = no_of_mride_tickets * b;
 
            long fare_with_oneride_ticket = n * a;
 
 
            if(fare_with_mride_ticket < fare_with_oneride_ticket){
 
                cout << fare_with_mride_ticket << endl;
            }else{
 
                cout << fare_with_oneride_ticket << endl;
            }
 
        }else{
 
            long fare_with_mride_ticket = (no_of_mride_tickets + 1) * b;
 
            // cout << "m ticket and fare " << no_of_mride_tickets + 1 << " " << fare_with_mride_ticket<< endl;
 
            long fare_with_oneride_ticket = n * a;
 
            long fare_with_mixed_tickets = (no_of_mride_tickets * b) + (no_of_one_ride_tickets * a);
 
            if(fare_with_mride_ticket < fare_with_oneride_ticket){
 
                if(fare_with_mride_ticket < fare_with_mixed_tickets){
 
                    cout << fare_with_mride_ticket << endl;
                }else{
 
                    cout << fare_with_mixed_tickets << endl;
                }
            }else{
 
                if(fare_with_oneride_ticket < fare_with_mixed_tickets){
 
                    cout << fare_with_oneride_ticket << endl;
                }else{
 
                    cout << fare_with_mixed_tickets << endl;
                }
            }
        }
}
