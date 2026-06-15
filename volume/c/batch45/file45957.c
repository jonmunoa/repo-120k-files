// fichero 45957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45957;

Registro45957 crear_registro45957(int id) {
    Registro45957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
