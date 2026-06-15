// fichero 20401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20401;

Registro20401 crear_registro20401(int id) {
    Registro20401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
