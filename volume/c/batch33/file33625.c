// fichero 33625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33625;

Registro33625 crear_registro33625(int id) {
    Registro33625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
