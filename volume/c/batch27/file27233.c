// fichero 27233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27233;

Registro27233 crear_registro27233(int id) {
    Registro27233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
