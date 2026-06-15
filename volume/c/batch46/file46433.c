// fichero 46433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46433;

Registro46433 crear_registro46433(int id) {
    Registro46433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
