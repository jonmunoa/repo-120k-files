// fichero 4481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4481;

Registro4481 crear_registro4481(int id) {
    Registro4481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
