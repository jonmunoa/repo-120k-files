// fichero 35457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35457;

Registro35457 crear_registro35457(int id) {
    Registro35457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
