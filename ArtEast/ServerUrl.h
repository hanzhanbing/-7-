//
//  ServerUrl.h
//  ArtEast
//
//  Created by yibao on 16/9/30.
//  Copyright © 2016年 北京艺宝网络文化有限公司. All rights reserved.
//

#ifndef ServerUrl_h
#define ServerUrl_h

#define AESSecret @"U1MjU1M0FDOUZ.Qz" //加密密钥

#pragma mark - ---------------接口地址---------------

#define AppSecret @"ea1af2ad4527edb95ad492943b986d6d426d99381953f10465a0ce6504b62a3e" //加密传输秘钥
#define ProductUrl @"http://60.205.180.199/api"
#define WebUrl @"http://60.205.180.199/"
#define PictureUrl @"http://60.205.180.199/"

//#define AppSecret @"325304c6db66dece54350ee3ace6b65ff550851f3386d3b90e25446866d315cc" //加密传输秘钥
//#define ProductUrl @"http://bak.cydf.com/api"
//#define WebUrl @"http://bak.cydf.com/"
//#define PictureUrl @"http://bak.cydf.com/"

//#define AppSecret @"ea1af2ad4527edb95ad492943b986d6d426d99381953f10465a0ce6504b62a3e" //加密传输秘钥
//#define ProductUrl @"http://www.cydf.com/api"
//#define WebUrl @"http://www.cydf.com/"
//#define PictureUrl @"http://images-app.cydf.com/"


#pragma mark - ---------------网页地址---------------

#define HTML_HomePage [NSString stringWithFormat:@"%@%@",WebUrl,@"wap/app.html"] //首页
#define HTML_NewExclusive [NSString stringWithFormat:@"%@%@",WebUrl,@"web2/newExclusive/newExclusive.html"] //新人专享
#define HTML_Seckill [NSString stringWithFormat:@"%@%@",WebUrl,@"web2/seckill/seckill.html"] //限时抢购
#define HTML_FindPage [NSString stringWithFormat:@"%@%@",WebUrl,@"web2/content/contentHome.html"] //精选话题
#define HTML_DesignSay [NSString stringWithFormat:@"%@%@",WebUrl,@"web2/designerSays/designerSays.html"] //设计师说
#define HTML_AddressPage [NSString stringWithFormat:@"%@%@",WebUrl,@"web2/retailer/addressment.html?from=0"] //地址列表页
#define HTML_OrderConfirmPage [NSString stringWithFormat:@"%@%@",WebUrl,@"web2/retailer/order2.html"] //订单确认页
#define HTML_CouponPage [NSString stringWithFormat:@"%@%@",WebUrl,@"web2/user/shoppVouchers.html?from=0"] //优惠券页
#define HTML_HelpCenter [NSString stringWithFormat:@"%@%@",WebUrl,@"web2/helpCenter/helpCenter.html"] //帮助中心
#define HTML_GoodsDetailComment [NSString stringWithFormat:@"%@%@",WebUrl,@"web2/content/goodsComment.html?goodsId="] //商品详情评论
#define HTML_GoodsDetailFav [NSString stringWithFormat:@"%@%@",WebUrl,@"web2/active/likeGoods/likeGoods.html?goodsId="] //商品详情喜欢


#pragma mark - ---------------接口名称---------------

#define URL_StartImage @"mobileapi.article.get_startImage" //获取启动图
#define URL_VersionUpdate @"mobileapi.member.app_version" //版本更新
#define URL_Login @"mobileapi.passport.post_login" //登录
#define URL_ThirdLogin @"mobileapi.passport.trust_login" //第三方登录
#define URL_JudgeShowThirdLogin @"mobileapi.member.ios_sh" //是否显示第三方登录
#define URL_Logout @"mobileapi.passport.logout" //退出
#define URL_Register @"mobileapi.passport.member_create" //注册
#define URL_SmsCode @"mobileapi.passport.send_vcode_sms" //短信验证码
#define URL_CheckUserName @"mobileapi.passport.sendPSW" //找回密码-验证要找回的用户名
#define URL_FindPswCheckCode @"mobileapi.passport.resetpwd_code" //找回密码-身份验证
#define URL_FindPswSetPsw @"mobileapi.passport.resetpassword" //找回密码-设置新密码
#define URL_Feedback @"mobileapi.member.send_msg" //意见反馈
#define URL_UploadImage @"mobileapi.member.upload_image" //上传头像、封面
#define URL_GetPersonalInfo @"mobileapi.member.setting" //获取个人资料
#define URL_EditPersonalInfo @"mobileapi.member.save_setting" //编辑个人资料
#define URL_MyUnCommentOrder @"mobileapi.member.nodiscuss" //待评价订单商品
#define URL_MyOrderInfo @"mobileapi.member.orders" //我的订单
#define URL_OrderDetail @"mobileapi.member.orderdetail" //订单详情
#define URL_CancelOrder @"mobileapi.member.cancel" //取消订单
#define URL_OrderPay @"mobileapi.paycenter.dopayment" //获取订单和sign
#define URL_GetWuliuInfo @"mobileapi.member.wuliu" //获取物流信息
#define URL_ConfirmOrder @"mobileapi.member.orderfinish" //确认收货
#define URL_MyAddress @"mobileapi.member.receiver" //我的收货地址
#define URL_DeleteAddress @"mobileapi.member.del_rec" //删除收货地址
#define URL_SaveAddress @"mobileapi.member.save_rec" //添加、修改收货地址
#define URL_GetAddressByID @"mobileapi.member.modify_receiver" //根据地址id得到收货地址
#define URL_SetDefaultAddress @"mobileapi.member.set_default" //设置和取消默认地址
#define URL_CheckAddAddress @"mobileapi.member.add_receiver" //判断是否能添加收货地址
#define URL_GetAreaData @"mobileapi.member.get_regions" //获取地区数据
#define URL_AddFav @"mobileapi.member.add_fav" //添加商品关注
#define URL_DeleteFav @"mobileapi.member.del_fav" //删除商品关注
#define URL_MyFav @"mobileapi.member.favoriteList" //我的商品关注列表
#define URL_CanSalesReturnOrderList @"mobileapi.aftersales.afterlist" //可退换货订单列表
#define URL_ApplySalesReturnOrder @"mobileapi.aftersales.add" //申请订单退换
#define URL_SubmitSalesReturnOrder @"mobileapi.aftersales.return_save" //提交订单退换
#define URL_GetArticleDetail @"mobileapi.article.get_detail" //得到文章内容细节

#define URL_GetVirtualCatesList @"mobileapi.goods.virtual_cates" //获取虚拟分类列表
#define URL_GetGoodsList @"mobileapi.goods.filter_goods" //虚拟分类商品list、商品搜索list

#define URL_GetCatesList @"mobileapi.goods.virtual_cate" //获取分类列表

#define URL_GetHotKeywords @"mobileapi.keywords.get_all_list" //获取热门关键字
#define URL_FuzzySearch @"mobileapi.keywords.associate" //关键字模糊搜索

#define URL_DeleteCart @"mobileapi.cart.delCart" //删除购物车商品或清空购物车
#define URL_GetCartList @"mobileapi.cart.get_list" //获取购物车列表
#define URL_UpdateCartNum @"mobileapi.cart.update" //更新购物车数量

#define URL_GoodsComment @"mobileapi.comment.toComment" //商品评论
#define URL_CommentPicUpload @"mobileapi.comment.image_upload_new" //评论图片上传

#define URL_CouponCount @"mobileapi.member.coupoinCount" //可用优惠券数量
#define URL_OrderCount @"mobileapi.member.order_nums" //订单数量

#define URL_ReturnApplyOne @"mobileapi.aftersales.add" //退货第一步
#define URL_ReturnApplyTwo @"mobileapi.aftersales.return_save" //退货第二步

#define URL_ChecckBindPhone @"mobileapi.passport.check_bind_phone" //验证是否绑定手机号
#define URL_BindPhone @"mobileapi.passport.bind_phone" //绑定手机号

#define URL_GetFindImages @"mobileapi.indexad.get_carousel" //获取首页轮播图内容

#define URL_GetGoodsDetail @"mobileapi.goods.get_item" //获取商品详情
#define URL_GetGoodsComment @"mobileapi.goods.comment" //获取商品评论
#define URL_GetCartNum @"mobileapi.cart.getCartNum" //获取购物车数量
#define URL_AddCartGoods @"mobileapi.cart.add" //添加购物车
#define URL_GetGoodsFav @"mobileapi.goods.get_favorite_members" //获取商品关注
#define URL_CheckGoodsFav @"mobileapi.member.checkIsFav" //检查商品关注
#define URL_AddGoodsFav @"mobileapi.member.add_fav" //添加商品关注
#define URL_DeleteGoodsFav @"mobileapi.member.del_fav" //删除商品关注

#define URL_GetOrderAddress @"mobileapi.member.receiver" //获取订单页面地址信息
#define URL_GetBuyList @"mobileapi.cart.get_BuyList" //获取购买列表
#define URL_GetInvoiceInfo @"mobileapi.member.getInvoiceByMemberID" //获取发票信息
#define URL_UpdateInvoiceInfo @"mobileapi.member.updateInvoiceByMemberID" //更新发票信息
#define URL_GetCoupoinList @"mobileapi.member.coupoinList" //获取优惠券列表
#define URL_OrderCreate @"mobileapi.order.create" //生成订单
#define URL_AddCoupon @"mobileapi.cart.add_coupon" //添加优惠券

#define URL_GetProvinceList @"mobileapi.member.getProvinceList" //获取省
#define URL_GetRegionsByID @"mobileapi.member.getRegionsByID" //根据省ID获取市

#define URL_GetHongBaoList @"mobileapi.salesgoods.get_redpackets_log" //获取红包列表

#define URL_Add_HXUser @"mobileapi.member.add_hxuser" //环信注册用户

#define URL_Xianshigou @"mobileapi.goods.xianshigou_index" //限时购
#define URL_Get_GoodsRecommendList @"mobileapi.goods.get_indexgoods" //获取好物推荐、人气新品

#define URL_Get_CoupoinList @"mobileapi.member.getCoupoinList" //获取用户福利列表
#define URL_User_Get_Coupoin @"mobileapi.member.save_coupon" //用户领取优惠券

#endif /* ServerUrl_h */
