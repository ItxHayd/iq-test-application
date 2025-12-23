
#include <string>
using namespace std;
struct mcq
{
    string question;
    string options[4];
    char ans;
};

mcq questions[] = {
    {"What comes next in the series? 3,6,11,18,27,?", {"36","38","39","40"}, 'C'},
    
    { "All roses are flowers. Some flowers fade quickly. Which statement is true?", {"All roses fade","Some roses fade","Some flowers may fade","No roses fade"}, 'C' },

    { "2 → 6, 3 → 12, 4 → 20. Then 5 → ?", {"25","30","35","40"}, 'B' }
};
