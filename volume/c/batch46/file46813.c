// fichero 46813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46813;

Registro46813 crear_registro46813(int id) {
    Registro46813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
