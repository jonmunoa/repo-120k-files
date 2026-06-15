// fichero 33969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33969;

Registro33969 crear_registro33969(int id) {
    Registro33969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
