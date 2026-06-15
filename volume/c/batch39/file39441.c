// fichero 39441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39441;

Registro39441 crear_registro39441(int id) {
    Registro39441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
