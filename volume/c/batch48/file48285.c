// fichero 48285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48285;

Registro48285 crear_registro48285(int id) {
    Registro48285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
