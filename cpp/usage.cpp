// Install libprotobuf-dev first!
#include "message.pb.h"
#include <iostream>
using namespace std;

int main()
{
    gocnn::RequestV1 req;
    cout << req.board_size();
    for (int i=0; i<19 * 19; ++i)
        req.add_oppo_group_lib1(true);
    cout << req.oppo_group_lib1(15);

    gocnn::ResponseV1 resp;
    resp.set_board_size(19);
    resp.add_possibility(0.2);
}
