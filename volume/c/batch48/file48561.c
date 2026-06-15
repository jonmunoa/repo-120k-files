// fichero 48561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48561;

Registro48561 crear_registro48561(int id) {
    Registro48561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
