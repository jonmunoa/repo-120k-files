// fichero 45297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45297;

Registro45297 crear_registro45297(int id) {
    Registro45297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
