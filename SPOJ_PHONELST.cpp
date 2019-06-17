#include <iostream>
#include <string>
#include <unordered_set>

int main(void) {
	int a,b=0;
	
	std::cin >> a;
	while(b<a){
		int n;
		std::cin >> n;
		std::unordered_set<std::string> set;
		for(int i = 0; i < n; ++i)
		{
			std::string num;
			std::cin >> num;
			set.insert(num);
		}
		bool flag = false;
		for(const std::string& c: set)
		{
			std::string t = c;
			for(int i = t.length() - 1; i >= 0; --i){
				t.erase(i);
				if(set.count(t))
				{
					flag = true;
					 goto print;
				}
			}
		}
		print:std::cout << (flag ? "NO" : "YES") << std::endl;
		b++;
	}
	return 0;   
}
