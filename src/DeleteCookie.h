#include "SocketCommand.h"

class DeleteCookie : public SocketCommand {
  Q_OBJECT;

 public:
  DeleteCookie(WebPageManager *, QStringList &arguments, QObject *parent = 0);
  virtual void start();
};
