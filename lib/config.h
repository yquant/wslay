#ifndef CONFIG_H
#define CONFIG_H

#ifdef _WINDOWS
 #define HAVE_WINSOCK2_H 1
#else
 #define HAVE_ARPA_INET_H 1
 #define HAVE_NETINET_IN_H 1
#endif

#endif /* CONFIG_H */
