// fichero 22381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22381;

Registro22381 crear_registro22381(int id) {
    Registro22381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
