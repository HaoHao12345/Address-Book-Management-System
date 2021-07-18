#include"addContactPerson.h"

// 添加联系人功能
// 联系人添加上限为1000
// 功能描述：用户输入待添加的联系人的姓名、性别、电话号码；可自行决定继续添加或者退出添加
//           这里需要用到循环结构，我们在主函数中实现循环调用即可
void addContactPerson(AddressBook *ab) {
	string name; // 待添加的联系人姓名
	string gender; // 待添加的联系人性别
	string phoneNum; // 待添加的联系人电话号码
	bool flag = true; // 标记，当flag为false终止循环
	if (ab->size == MAX) { // 判断通讯录是否已满
		cout << "通讯录人数已达上限，无法继续添加！" << endl;
		return; // 退出函数
	}
	else {
		// 姓名
		cout << "请输入待添加的联系人姓名：";
		cin >> name;
		ab->person[ab->size].name = name;

		// 性别
		cout << "请输入待添加的联系人性别：";
		cin >> gender;
		// 为了避免用户输入不存在的性别，加入循环结构；
		// 当用户输入性别错误时，允许用户重新输入；当输入正确时循环终止
		while (true) {
			if (gender == "男" || gender == "女") {
				ab->person[ab->size].gender = gender;
				break;
			}
			else {
				cout << "输入错误，不存在的性别！请重新输入：";
				cin >> gender;
			}
		}

		// 电话号码
		cout << "请输入待添加的联系人电话号码：";
		cin >> phoneNum;
		ab->person[ab->size].phoneNum = phoneNum;

		cout << "添加成功！" << endl;

		system("pause"); // 暂停代码执行，按任意键可继续

		system("cls"); // 清屏

	}
	
}
