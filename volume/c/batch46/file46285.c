// fichero 46285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46285;

Registro46285 crear_registro46285(int id) {
    Registro46285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
