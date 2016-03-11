#include "DeleteCookie.h"
#include "WebPage.h"
#include "WebPageManager.h"
#include "NetworkCookieJar.h"
#include <QNetworkCookie>

DeleteCookie::DeleteCookie(WebPageManager *manager, QStringList &arguments, QObject *parent) : SocketCommand(manager, arguments, parent) {}

void DeleteCookie::start()
{
  QList<QNetworkCookie> cookies = QNetworkCookie::parseCookies(arguments()[0].toLatin1());
  
  NetworkCookieJar *jar = manager()->cookieJar();
  jar->deleteCookie(cookies[0]);
  finish(true);
}
