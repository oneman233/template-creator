这是一个用于快速建立算法比赛文件目录和自定义模板的脚本

**使用方法**

* 修改 `template.cpp` 为自定义算法模板
* 在当前目录下使用命令行，键入以下命令：
  * `TemplateCreator <folder name> <number>`：建立新目录 `folder name`，并且按照 `1.cpp` 到 `number.cpp` 的顺序复制算法模板
  * `TemplateCreator <folder name> <uppercase letter>`：建立新目录 `folder name`，并且按照 `A.cpp` 到 `uppercase letter.cpp` 的顺序复制算法模板

例如，键入 `NewProject test 5` 命令，目录如下所示：

```
│  TemplateCreator.cpp
│  TemplateCreator.exe
│  README.md
│  template.cpp
│
└─test
        1.cpp
        2.cpp
        3.cpp
        4.cpp
        5.cpp
```

test目录下所有的cpp文件都与 `template.cpp` 一模一样，只是重新进行了命名和编号
