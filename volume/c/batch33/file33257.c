// fichero 33257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33257;

Registro33257 crear_registro33257(int id) {
    Registro33257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
