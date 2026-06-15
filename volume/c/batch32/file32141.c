// fichero 32141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32141;

Registro32141 crear_registro32141(int id) {
    Registro32141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
