// fichero 15285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15285;

Registro15285 crear_registro15285(int id) {
    Registro15285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
