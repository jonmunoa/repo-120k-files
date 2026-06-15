// fichero 44457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44457;

Registro44457 crear_registro44457(int id) {
    Registro44457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
