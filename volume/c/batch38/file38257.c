// fichero 38257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38257;

Registro38257 crear_registro38257(int id) {
    Registro38257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
