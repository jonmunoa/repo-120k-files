// fichero 45349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45349;

Registro45349 crear_registro45349(int id) {
    Registro45349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
