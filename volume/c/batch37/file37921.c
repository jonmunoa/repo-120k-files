// fichero 37921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37921;

Registro37921 crear_registro37921(int id) {
    Registro37921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
