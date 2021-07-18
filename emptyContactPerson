#include"emptyContactPerson.h"
#include"existContactPerson.h"

// 清空联系人功能
// 清空方法：将通讯录当前联系数量置0
// 功能描述：将通讯录中所有联系人清空
//           由于清空通讯录是一个需要谨慎进行的操作
//           所以在进行清空操作前提示用户
void emptyContactPerson(AddressBook* ab) {
	bool flag; // 标记变量，用于判断是否确定清空通讯录
	if (existContactPerson(*ab) == false) { // 通讯录中无联系人
		cout << "当前通讯录中无联系人！" << endl;
	}
	else { // 通讯录中有联系人
		cout << "请问您确定要清空通讯录吗？（是请按1，否请按0）";
		cin >> flag;
		if (flag == true) {
			ab->size = 0;
			cout << "清空通讯录成功！" << endl;
		}
		else {
			cout << "取消清空通讯录操作！" << endl;
		}

	}

	system("pause"); // 暂停代码执行，按任意键继续

	system("cls"); // 清屏

}
