// fichero 15005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15005;

Registro15005 crear_registro15005(int id) {
    Registro15005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
