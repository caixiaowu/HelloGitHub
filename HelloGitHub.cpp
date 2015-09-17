#include<iostream>
#include<string>
using namespace std;
int main()
{
	//--------------各种code-------------
	//---1---打印二进制
	char buf[2048*10] = {0};
	for (int i = 0; i < send_msg.size(); ++i)
	{
		snprintf(buf + i*3, 2048*10, "%02X ", send_msg[i]);
	}

	API_ERROR("send_msg=%s",buf);

	//---2---解析pb协议
	if(!userState.ParseFromArray(strOutValue.c_str(), strOutValue.size())) 
    {
        ERROR_LOG("Parse userState failed");
        return -1;
    }

	return 0;
}