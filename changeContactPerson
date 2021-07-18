#include"changeContactPerson.h"
#include"isExistContactPerson.h"

// 修改联系人功能
// 功能描述：输入待修改的联系人的姓名，然后依次将修改后的信息输入；若查无此人，给出相应提示
void changeContactPerson(AddressBook* ab) {
	string originName; // 修改前的姓名
	string name; // 修改后的姓名
	string gender; // 修改后的性别
	string phoneNum; // 修改后的电话号码
	cout << "请输入待修改的联系人的名字：";
	cin >> originName;
	// 判断是否存在该联系人
	int ret = isExistContactPerson(*ab, originName);
	if (ret == -1) { // 找不到联系人
		cout << "不存在该联系人！" << endl;

		system("pause"); // 暂停代码执行，按任意键继续

		system("cls"); // 清屏

		return;
	}
	else { // 找到了联系人
		cout << "请输入修改后的名字：";
		cin >> name;
		ab->person[ret].name = name;
		cout << "请输入修改后的性别：";
		cin >> gender;
		while (true) {
			if (gender == "男" || gender == "女") { // 性别输入正确，退出循环
				ab->person[ret].gender = gender;
				break;
			}
			else { // 性别输入错误，重新输入
				cout << "错误，不存在的性别！" << endl;
				cout << "请重新输入修改后的性别：";
				cin >> gender;
			}
		}
		cout << "请输入修改后的电话号码：";
		cin >> phoneNum;
		ab->person[ret].phoneNum = phoneNum;
	}

	cout << "修改成功！" << endl;

	system("pause"); // 暂停代码执行，按任意键继续

	system("cls"); // 清屏


}
