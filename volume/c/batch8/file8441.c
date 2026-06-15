// fichero 8441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8441;

Registro8441 crear_registro8441(int id) {
    Registro8441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
