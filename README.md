# JW-Xcode-Template

## 如何更新

安装模板在你当前的Xcode安装,请遵循以下步骤:

1. 下载 或者 clone 这个工程
2. 移动```JW-Xcode-Template```文件夹中模板存储库到```/Users/(用户名)/Library/Developer/Xcode/Templates/```目录。如果这是你第一次安装一个模板,目录会失踪。一个简单的```mkdir -p /Users/(用户名)/Library/Developer/Xcode/Templates/JWProject \Templates```在命令行创建缺失的路径。
3. ```Bundle identifier```要自行添加(遇到的问题添加了Bundle identifier，但是还是自行添加)

# Cocoapods 
## 模板中默认添加了 ```Podfile ```,里面有些常用的第三方库，在启动工程之前使用命令```pod install```。如果你没有使用过```Cocopods```,可以参考[Cocopods](https://cocoapods.org/)

# 模板有三种

1. ```JW App.xctemplate```一个完整的配置，没有使用父类结构

2. ```JW Base.xctemplate```创建了一个父类结构

3. ```JW Application.xctemplate```使用了```JW Base.xctemplate``父类结构


![目录](https://github.com/yangjw/JW-Xcode-Template/blob/master/Images/1.png)

## 自行添加Bundle identifier
![identifier]https://github.com/yangjw/JW-Xcode-Template/blob/master/Images/2.png


![TemplateInfo](https://github.com/yangjw/JW-Xcode-Template/blob/master/Images/3.png)
![TemplateInfo](https://github.com/yangjw/JW-Xcode-Template/blob/master/Images/4.png)
