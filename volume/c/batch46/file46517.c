// fichero 46517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46517;

Registro46517 crear_registro46517(int id) {
    Registro46517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
