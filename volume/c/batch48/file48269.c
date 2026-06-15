// fichero 48269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48269;

Registro48269 crear_registro48269(int id) {
    Registro48269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
