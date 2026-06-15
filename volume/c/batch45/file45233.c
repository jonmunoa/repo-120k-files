// fichero 45233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45233;

Registro45233 crear_registro45233(int id) {
    Registro45233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
