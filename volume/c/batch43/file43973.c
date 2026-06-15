// fichero 43973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43973;

Registro43973 crear_registro43973(int id) {
    Registro43973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
