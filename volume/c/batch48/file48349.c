// fichero 48349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48349;

Registro48349 crear_registro48349(int id) {
    Registro48349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
