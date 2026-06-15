// fichero 37097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37097;

Registro37097 crear_registro37097(int id) {
    Registro37097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
