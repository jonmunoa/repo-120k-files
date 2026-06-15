// fichero 46733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46733;

Registro46733 crear_registro46733(int id) {
    Registro46733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
