// fichero 33253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33253;

Registro33253 crear_registro33253(int id) {
    Registro33253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
