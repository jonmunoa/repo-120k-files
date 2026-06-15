// fichero 27349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27349;

Registro27349 crear_registro27349(int id) {
    Registro27349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
