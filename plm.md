# 全设备生命周期管理

## 用户登录界面设计

### 用户信息表设计

#### 用户登录信息表

该表主要用来记录用户登录时要验证的主要信息，包括用户名和密码。

``` sql
create table tb_user
(
    id       int auto_increment comment '用户编号'
        primary key,
    username varchar(20) not null comment '用户名',
    pwd      varchar(20) not null comment '用户密码',
    constraint username
        unique (username)
)
    comment '用户信息表';
```

#### 用户验证信息表

该表主要用来记录在注册新用户时，用户所需填写的必要的验证信息，以便在找回用户密码时能够验证用户身份。

```mysql
create table tb_validinfo
(
    id      int auto_increment comment '用户验证信息字段条数'
        primary key,
    schInfo varchar(40) not null comment '用户学校验证信息',
    parInfo varchar(40) not null comment '用户父母验证信息',
    favInfo varchar(40) not null comment '用户最喜爱事务验证信息',
    userId  int         not null comment '用户信息表外键',
    constraint userId
        unique (userId),
    constraint tb_validinfo_ibfk_1
        foreign key (userId) references tb_user (id)
)
    comment '用户注册验证信息表';
```

#### 用户登录界面设计

![image-20220812100159596](D:\Project\C++\plm\plm\images\image-20220812100159596.png)

#### 注册账号按钮功能实现

在用户按下注册账号按钮时，将弹出子页面供用户输入信息。