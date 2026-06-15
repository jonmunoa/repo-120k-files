// fichero 45285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45285;

Registro45285 crear_registro45285(int id) {
    Registro45285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
