#include"showContactPerson.h"
#include"existContactPerson.h"

// 显示联系人功能
// 功能描述：显示通讯录中所有联系人的姓名、性别、电话号码；若通讯录中么没有联系人，则打印相应提示
void showContactPerson(AddressBook ab) {
	bool flag = existContactPerson(ab);
	if (flag == false) {
		cout << "暂未添加任何联系人！" << endl;
	}
	else {
		for (int i = 0; i < ab.size; i++) {
			cout << "联系人姓名：" << ab.person[i].name << ' ';
			cout << "联系人性别：" << ab.person[i].gender << ' ';
			cout << "联系人电话号码：" << ab.person[i].phoneNum <<endl;
		}
	}

	system("pause"); // 暂停代码执行，按任意键继续

	system("cls"); // 清屏

}
