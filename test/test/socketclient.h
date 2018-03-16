//SOCKETCLIENT
#ifndef _SOCKETCLIENT_H
#endif	_SOCKETCLIENT_H

#ifdef __cplusplus
extern "C" {
#endif

//第一套api函数
//socket 客户端环境初始化
int socketclient_init(void **handle);
//socket 客户端报文发送
int socketclient_send(void *handle, unsigned char *buf, int buflen);
//socket 客户端报文接受
int socketclient_recv(void *handle, unsigned char *buf, int buflen);
//socket 客户端环境释放
int socketclient_destory(void *handle);


//第二套api函数
//socket 客户端环境初始化
int socketclient_init2(void **handle);
//socket 客户端报文发送
int socketclient_send2(void *handle, unsigned char *buf, int buflen);
//socket 客户端报文接受
int socketclient_recv2(void *handle, unsigned char **buf, int buflen);
int socketclient_Free(unsigned char **buf);; //add
//socket 客户端环境释放
int socketclient_destory2(void **handle);

#ifdef __cplusplus
}
#endif
//技术分析
//1级指针
//2级指针
//void **handle 类型封装的概念 业务模型封装的概念