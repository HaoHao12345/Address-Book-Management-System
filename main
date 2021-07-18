#include"showMenu.h"
#include"addContactPerson.h"
#include"showContactPerson.h"
#include"deleteContactPerson.h"
#include"findContactPerson.h"
#include"changeContactPerson.h"
#include"emptyContactPerson.h"
#include"structureDesign.h"

// 通讯录功能包括：其实就是最基本的增删改查，在此基础上外加清空和退出
// 功能描述：进入界面,显示菜单，用户通过输入对应数字0-6选择相应操作，其中0代表退出；
//           只要用户不选择退出，便可不断进行操作，直到用户选择退出为止；
//           任何一种操作，都需要给用户相应的反馈

int main() {
	int option = 0; // 菜单选项

	// 创建通讯录结构体
	AddressBook ab;

	// 输入选项，即选定要做的操作
	cout << "请输入选项："<<endl;
	showMenu();
	cin >> option;

	// 使用循环结构
	// 当用户没选择退出通讯录需要不断操作
	// 当用户输入0，即选择退出通讯录时循环结束
	while (true) {
		// 根据不同操作调用不同函数
		switch (option) {
		case 1: // 添加联系人
			addContactPerson(&ab);
			ab.size++; // 更新通讯录人数
			break;
		case 2: // 显示联系人
			showContactPerson(ab);
			break;
		case 3: // 删除联系人
			deleteContactPerson(&ab);
			break;
		case 4: // 查找联系人
			findContactPerson(ab);
			break;
		case 5: // 修改联系人
			changeContactPerson(&ab);
			break;
		case 6: // 清空联系人
			emptyContactPerson(&ab);
			break;
		case 0: // 退出通讯录
			cout << "欢迎下次使用！" << endl;
			system("pause"); // 按任意键退出
			return 0; // 退出整个代码
			break;
		}

		cout << endl;

		cout << "请再次输入选项：" << endl;
		showMenu();
		cin >> option;

	}
	
	system("pause");
	return 0;
}
