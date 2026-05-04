class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int gas_tank = 0; 
        int s_index = 0; 
        int total_gas = 0; 
        int total_cost = 0; 

        for(int i = 0; i < gas.size(); i++)
        {
            total_gas += gas[i];
            total_cost += cost[i];

            gas_tank += gas[i] - cost[i];

            if(gas_tank < 0)
            {
                s_index = i +1;
                gas_tank = 0; 
            }
        }
      
        if( total_gas >= total_cost)
        {
            return s_index;
        }

        return -1;
    }
    
};
