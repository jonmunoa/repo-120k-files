// fichero 24337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24337;

Registro24337 crear_registro24337(int id) {
    Registro24337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
