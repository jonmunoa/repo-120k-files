// fichero 2457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2457;

Registro2457 crear_registro2457(int id) {
    Registro2457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
