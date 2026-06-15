// fichero 32029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32029;

Registro32029 crear_registro32029(int id) {
    Registro32029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
