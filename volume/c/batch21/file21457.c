// fichero 21457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21457;

Registro21457 crear_registro21457(int id) {
    Registro21457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
