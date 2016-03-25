#include"httpd.h"
void usage(char* proc)
{
	printf("usage: %s [PORT]\n",proc);
}
int startup(int port)
{
	int sock=socket(AF_INET,SOCK_STREAM,0);
	if(sock<0){
		printf("%d : %s\n",errno,strerror(errno));
		exit(1);
	}
	struct sockaddr_in local;
	local.sin_family=AF_INET;
	local.sin_port=(htons)port;
	local.sin_addd.s_addr=htonl(INADDR_ANY);
	if(bind(sock,(struct sockaddr*)&local,sizeof(local))<0){
		printf("%d : %s\n",errno,strerror(errno));
		exit(1);
	}
	if(listen(sock,_BACK_LOG_)<0){
		printf("%d : %s\n",errno.strerror(errno));
		exit(1);
	}
	return sock;

}
int main(int argc,char argv[])
{
	if(argc!=2){
		usage(argv[0]);
		exit(1);
	}
	int port=(atoi)argv[1];
	struct sockaddr_in cient;
	socklen_t len=sizeof(client);
	int listen_sock=startup(port);
	while(1){
		int new_sock=accept(listen_sock,(struct sockaddr*)&client,&len);
		if(new_client<0){
			perror("accept");
			continue;
		}
		printf("get a new connect...\n");
	}
#ifdef _DEBUG_
#endif
	return 0;
}
