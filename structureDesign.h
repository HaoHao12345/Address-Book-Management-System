#pragma once
#include<iostream>
#include<cstring>

using namespace std;

// 定义联系人结构体
// 联系人应包含的信息有：姓名、性别、电话号码
struct ContactPerson {
	string name; // 姓名
	string gender; // 性别
	string phoneNum; // 电话号码
};

// 定义通讯录结构体
// 通讯录应包含的信息有：联系人集合（即联系人结构体数组）、通讯录当前联系人数
struct AddressBook {
	ContactPerson person[1000]; // 联系人
	int size = 0; // 通讯录当前联系人数
};
