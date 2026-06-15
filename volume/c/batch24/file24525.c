// fichero 24525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24525;

Registro24525 crear_registro24525(int id) {
    Registro24525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
