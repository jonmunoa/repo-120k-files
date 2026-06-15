// fichero 48525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48525;

Registro48525 crear_registro48525(int id) {
    Registro48525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
