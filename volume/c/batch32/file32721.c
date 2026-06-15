// fichero 32721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32721;

Registro32721 crear_registro32721(int id) {
    Registro32721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
