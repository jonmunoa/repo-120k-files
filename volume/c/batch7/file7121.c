// fichero 7121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7121;

Registro7121 crear_registro7121(int id) {
    Registro7121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
