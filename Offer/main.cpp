//
//  main.cpp
//  Offer
//
//  Created by 超级腕电商 on 2018/4/20.
//  Copyright © 2018年 超级腕电商. All rights reserved.
//

#include <iostream>
#include <vector>
class Solution {
public:
    bool Find(int target, std::vector<std::vector<int> > array) {
        bool exist = false;
        if (array.empty()) {
            return exist;
        }
        for (int i= 0; i<array.size(); i++) {
            if (array[i].empty()) {
                continue;
            }
            int count = array[i].size();
            if (array[i][count-1]<target) {
                continue;
            }
            for (int j=count-1; j>=0; j--) {
                //printf("%d\n",array[i][j]);
                if (array[i][j]==target) {
                    exist = true;
                    return exist;
                }else if (target>array[i][j]){
                    continue;
                }
            }
        }
        return exist;
        
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Solution  solution;
    //printf("结果为：%d\n",solution.Find(11, {{1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15}}));
    return 0;
}

