// fichero 33381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33381;

Registro33381 crear_registro33381(int id) {
    Registro33381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
