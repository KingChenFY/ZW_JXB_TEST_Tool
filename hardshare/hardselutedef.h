#ifndef __WK_HARD_SELUTE_DEFINE_H_
#define __WK_HARD_SELUTE_DEFINE_H_

// 二维码扫码D层任务执行结果定义
typedef enum 
{
    emSeluteDQRScanner_start,
    emSeluteDQRScanner_NoErr, // 正常
    emSeluteDQRScanner_Outtime,//超时(动作次数)

    emSeluteDQRScanner_DCfgErr,//D层配置信息无效
    emSeluteDQRScanner_C2DDataErr,//C->D传入参数错误
    emSeluteDQRScanner_NoLink,//无法确认二维码设备
    emSeluteDQRScanner_HardwareErr,//硬件错误
    
    emSeluteDQRScanner_end 
}emSeluteDQRScanner;
    
//皮带二维码任务执行结果定义
typedef enum
{
	emSeluteDScan_start,
	emSeluteDScan_NoErr,// 正常
	emSeluteDScan_Outtime,//超时(动作次数)

	emSeluteDScan_NoLink,//无法确认二维码设备
	emSeluteDScan_HardwareErr,//硬件错误
	emSeluteDScan_end
}emSeluteDScan;

// 滴油D层任务执行结果定义
typedef enum 
{
    emSeluteDDropOil_start,
    emSeluteDDropOil_NoErr,//正常
    emSeluteDDropOil_Outtime,//超时(动作次数)
    
    emSeluteDDropOil_DCfgErr,//D层配置信息无效
    emSeluteDDropOil_C2DDataErr,//C->D传入参数错误
    emSeluteDDropOil_NoLink,// 无法确认滴油设备
    emSeluteDDropOil_HardwareErr,//硬件错误
    emSeluteDDropOil_DropNumErr,// 油滴数不足
    
    emSeluteDDropOil_end 
}emSeluteDDropOil;

//除油任务执行结果定义
typedef enum
{
	emSeluteDCleanOil_start,

	//动作结论
	emSeluteDCleanOil_NoErr,//正常
	emSeluteDCleanOil_Outtime,//超时(动作次数)
	emSeluteDCleanOil_DCfgErr,//D层配置信息无效
	emSeluteDCleanOil_C2DDataErr,//C->D传入参数错误
	//任务结论
	emSeluteDCleanOil_NoLink,// 无法确认除油设备
	emSeluteDCleanOil_HardwareErr,//除油硬件错误
	emSeluteDCleanOil_EnvErr,
	emSeluteDCleanOil_SwitchL1Err,
	emSeluteDCleanOil_SwitchL2Err,
	emSeluteDCleanOil_NoPaper,
	
	emSeluteDCleanOil_end
}emSeluteDCleanOil;

// 光源D层任务执行结果定义
typedef enum
{
	emSeluteDBright_start,
	emSeluteDBright_NoErr,//正常
	emSeluteDBright_NoLink,//无法确认光源设备
	emSeluteDBright_end
}emSeluteDBright;

// XYZ平台移动功能D层任务执行结果定义
typedef enum 
{
	emSeluteDMoveXYZ_start,
	emSeluteDMoveXYZ_NoErr, // 正常
	emSeluteDMoveXYZ_Outtime,//动作超时（动作次数）
	
	emSeluteDMoveXYZ_DCfgErr,//配置参数错误
	emSeluteDMoveXYZ_C2DTypeErr,//C->D传入类型错误
	emSeluteDMoveXYZ_C2DDataErr,//C->D传入参数错误
	emSeluteDMoveXYZ_xLimitSwitch1Err,//x限位开关1异常
	emSeluteDMoveXYZ_yLimitSwitch1Err,//y限位开关1异常
	emSeluteDMoveXYZ_zLimitSwitch1Err,//z限位开关1异常
	emSeluteDMoveXYZ_xLimitSwitch2Err,//x限位开关2异常
	emSeluteDMoveXYZ_yLimitSwitch2Err,//y限位开关2异常
	emSeluteDMoveXYZ_zLimitSwitch2Err,//z限位开关2异常
	emSeluteDMoveXYZ_xLimitSwitchErr,//x限位开关异常(两头都遮挡)
	emSeluteDMoveXYZ_yLimitSwitchErr,//y限位开关异常(两头都遮挡)
	emSeluteDMoveXYZ_zLimitSwitchErr,//z限位开关异常(两头都遮挡)
	emSeluteDMoveXYZ_xLimitInvalid,//x边界异常(为默认值)
	emSeluteDMoveXYZ_yLimitInvalid,//y边界异常(为默认值)
	emSeluteDMoveXYZ_zLimitInvalid,//z边界异常(为默认值)
	emSeluteDMoveXYZ_xLimitBigErr,//x边界定位超出预期
	emSeluteDMoveXYZ_yLimitBigErr,//y边界定位超出预期
	emSeluteDMoveXYZ_zLimitBigErr,//z边界定位超出预期
	emSeluteDMoveXYZ_xLengthLargeErr,//x参考行程过大
	emSeluteDMoveXYZ_yLengthLargeErr,//y参考行程过大
	emSeluteDMoveXYZ_zLengthLargeErr,//z参考行程过大
//	emSeluteDMoveXYZ_xOutofLineErr,//x轴目标位置越过边界
//	emSeluteDMoveXYZ_yOutofLineErr,//y轴目标位置越过边界
//	emSeluteDMoveXYZ_zOutofLineErr,//z轴目标位置越过边界
	emSeluteDMoveXYZ_xDriverErr,//x驱动异常
	emSeluteDMoveXYZ_yDriverErr,//y驱动异常
	emSeluteDMoveXYZ_zDriverErr,//z驱动异常
	emSeluteDMoveXYZ_xNoLink,//x驱动无连接
	emSeluteDMoveXYZ_xZeroCheckFaild,//x轴原点校验失败
	emSeluteDMoveXYZ_TrailPointInvalid,//跟随移动轨迹点异常
	emSeluteDMoveXYZ_TrailInvalid,//跟随移动轨迹缺失
	emSeluteDMoveXYZ_yNoLink,//y驱动无连接
	emSeluteDMoveXYZ_zAdptEnvErr,//Z轴自适应环境错误(判断Y轴是否完成定位，若已完成则在有效范围内，若未完成则需要Y在最外侧)
	emSeluteDMoveXYZ_zMoveAdptFailed,//Z移动自适应失败
	emSeluteDMoveXYZ_zFollowAdptFailed,//Z跟随自适应失败
	emSeluteDMoveXYZ_xLimitZeroErr,//零点限位开关异常
	emSeluteDMoveXYZ_xOverLimit,//位置超出边界限位
	emSeluteDMoveXYZ_xEncodeErr,//X轴编码器异常
	emSeluteDMoveXYZ_xSetZeroFail,//设置零点失败
	emSeluteDMoveXYZ_xZeroOutAllowErr,//零点动态校验失败
	emSeluteDMoveXYZ_ySetMoveCtrlErr,//y轴设置移动控制错误
    emSeluteDMoveXYZ_end
}emSeluteDMoveXYZ; 

// 垂直扫描D层任务执行结果定义
typedef enum
{
    emSeluteDMoveBoxV_start,
    emSeluteDMoveBoxV_NoErr, // 正常
    emSeluteDMoveBoxV_Outtime,//动作超时（动作次数）
        
    emSeluteDMoveBoxV_DCfgErr,//D层配置信息无效
    emSeluteDMoveBoxV_C2DTypeErr,//C->D传入参数错误
    emSeluteDMoveBoxV_C2DDataErr,//C->D传入参数错误
    emSeluteDMoveBoxV_Nolink,  //设备连接异常
    emSeluteDMoveBoxV_HardWareErr,  //设备异常
    emSeluteDMoveBoxV_LineErr,  //边界异常(为默认值)
    emSeluteDMoveBoxV_LineLimit12Err,  //限位开关异常（1,2遮挡）
    emSeluteDMoveBoxV_LimitSwitch1Err,// 开关信号异常
    emSeluteDMoveBoxV_LimitSwitch2Err,// 开关信号异常
    emSeluteDMoveBoxV_EnvirErr,//环境异常
    emSeluteDMoveBoxV_MotorErr,//电机报错
    emSeluteDMoveBoxV_IRErr,//激光异常
	emSeluteDMoveBoxV_NotConnectB2,//未检测到板2（翻转盒位置信息未知）
	emSeluteDMoveBoxV_sfZeroCheckFaild,//sf原点校验失败
	emSeluteDMoveBoxV_sfDriverErr,//x驱动异常

    emSeluteDMoveBoxV_end
}emSeluteDMoveBoxV;

//旋转进出舱D层任务执行结果定义
typedef enum 
{
    emSeluteDUpender_start,
    emSeluteDUpender_NoErr, 			//正常
    emSeluteDUpender_OutTime,			//超时(动作次数)
    
    emSeluteDUpender_DCfgErr,			//配置参数错误
    emSeluteDUpender_C2DDataErr,		//C->D传入参数错误
    emSeluteDUpender_HardwareErr,		//设备异常，移动了很久也没移动到位置
    emSeluteDUpender_LimitSwitchErr,	//限位开关异常
    emSeluteDUpender_LimitSwitch1Err,	//限位开关S异常
    emSeluteDUpender_LimitSwitch2Err,	//限位开关E异常(S:Start起点 E:End终点)
    emSeluteDUpender_EnvInErr,			//旋转舱旋入环境位置错误（环境不符合）
    emSeluteDUpender_EnvOutErr,			//旋转舱旋出环境位置错误（环境不符合）
	emSeluteDUpender_Disconnect,		//板2失去连接（未知的位置信息）
	
    emSeluteDUpender_end 
}emSeluteDUpender;

// 夹爪任务执行结果定义
typedef enum
{
	emSeluteDGripper_start,
	emSeluteDGripper_NoErr,//正常
	emSeluteDGripper_Outtime,//超时(动作次数)
	
	emSeluteDGripper_DCfgErr,//配置参数错误
	emSeluteDGripper_C2DDataErr,//C->D传入参数错误
	emSeluteDGripper_GripperErr,//夹爪异常
	emSeluteDGripper_SwitchErr,//行程开关异常
	emSeluteDGripper_EdgeErr,//边界异常
	//emSeluteDGripper_EnvErr,//环境异常
	emSeluteDGripper_NoLink,//无法确认设备
	emSeluteDGripper_end
}emSeluteDGripper;

// 入(出)舱皮带任务执行结果定义
typedef enum
{
	emSeluteDBelt_start,

	//动作结论
	emSeluteDBelt_NoErr,//正常
	emSeluteDBelt_Outtime,//超时(动作次数)
	emSeluteDBelt_DCfgErr,//D层配置信息无效
	emSeluteDBelt_C2DDataErr,//C->D传入参数错误
	//任务结论
	emSeluteDBelt_EnvErr,//环境异常
	emSeluteDBelt_BeltHardwareErr,//传送带硬件错误(有盒子但未移动)
	emSeluteDBelt_ScanHardwareErr,//扫码器硬件错误
	emSeluteDBelt_QRScanNolink,//二维码扫描器无连接
	emSeluteDBelt_SlideErr,//玻片异常(激光被遮挡)
	emSeluteDBelt_SwitchB1Err,//行程开关1异常(远翻转盒侧)
	emSeluteDBelt_SwitchB2Err,//行程开关2异常(近翻转盒侧)
	
	emSeluteDBelt_end
}emSeluteDBelt;

// 入(出)舱推(拉)杆任务执行结果定义
typedef enum
{
	emSeluteDPole_start,

	//动作结论
	emSeluteDPole_NoErr,//正常
	emSeluteDPole_Outtime,//超时(动作次数)
	emSeluteDPole_DCfgErr,//D层配置信息无效
	emSeluteDPole_C2DDataErr,//C->D传入参数错误
	//任务结论
	emSeluteDPole_EnvErr,//环境异常
	emSeluteDPole_HardwareErr,//推杆硬件错误(长时间未移动)

	emSeluteDPole_SwitchP1Err,//起点限位开关P1异常
	emSeluteDPole_SwitchP2Err,//终点限位开关P2异常
	emSeluteDPole_SwitchP1_P2Err,//开关信号异常（P1、P2同时遮挡）
	emSeluteDPole_NoBox,//无盒子存在
    emSeluteDPole_FullBox,//盒子已满
	emSeluteDPole_PoleInPosErr,//入推杆位置异常

	emSeluteDPole_SwitchL1Err,//起点限位开关L1异常
	emSeluteDPole_SwitchL2Err,//终点限位开关L2异常
	emSeluteDPole_SwitchL1_L2Err,//开关信号异常（L1、L2同时遮挡）
	emSeluteDPole_PoleOutPosErr,//出推杆位置异常
	
	emSeluteDPole_Disconnect,//板2失去连接（未知的位置信息）

	emSeluteDPole_end
}emSeluteDPole;

typedef enum
{
	emSeluteDGripRole_start,
	
	//动作结论
	emSeluteDGripRole_NoErr,//正常
	emSeluteDGripRole_Outtime,//超时(动作次数)
	emSeluteDGripRole_DCfgErr,//D层配置信息无效
	emSeluteDGripRole_C2DDataErr,//C->D传入参数错误
	
	//任务结论
	emSeluteDGripRole_EnvErr,//环境异常
	emSeluteDGripRole_HardwareErr,//夹爪旋转硬件错误
	
	emSeluteDGripRole_SwitchGR1Err,//限位1异常
	emSeluteDGripRole_SwitchGR2Err,//限位2异常
	emSeluteDGripRole_ExceedGR1,//移动超出限位1
	emSeluteDGripRole_ExceedGR2,//移动超出限位2
	
	emSeluteDGripRole_end
}emSeluteDGripRole;

typedef enum
{
	emSeluteDGalvo_start,

	//动作结论
	emSeluteDGalvo_NoErr,//正常
	emSeluteDGalvo_Outtime,//超时(动作次数)
	emSeluteDGalvo_DCfgErr,//D层配置信息无效
	emSeluteDGalvo_C2DDataErr,//C->D传入参数错误

	//任务结论
	emSeluteDGalvo_EnvErr,//环境异常
	emSeluteDGalvo_HardwareErr,//夹爪旋转硬件错误

	emSeluteDGalvo_end
}emSeluteDGalvo;

#endif /* ifndef __WK_HARD_SELUTE_DEFINE_H_ */
