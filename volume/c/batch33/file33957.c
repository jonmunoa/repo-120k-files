// fichero 33957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33957;

Registro33957 crear_registro33957(int id) {
    Registro33957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
