#include"findContactPerson.h"
#include"isExistContactPerson.h"

void findContactPerson(AddressBook ab) {
	string name; // 待查找的联系人姓名
	cout << "请输入待查找的联系人姓名：";
	cin >> name;
	// 判断是否存在该联系人
	int ret = isExistContactPerson(ab,name);
	if (ret == -1) { // 找不到联系人
		cout << "查无此人！" << endl;
		system("pause"); // 暂停代码执行，按任意键继续
		system("cls"); // 清屏
		return;
	}
	else { // 找到了联系人
		cout << "姓名：" << ab.person[ret].name<<' ';
		cout << "性别：" << ab.person[ret].gender<<' ';
		cout << "电话号码：" << ab.person[ret].phoneNum << endl;

		system("pause"); // 暂停代码执行，按任意键继续

		system("cls"); // 清屏

	}
}
