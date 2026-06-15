// fichero 21441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21441;

Registro21441 crear_registro21441(int id) {
    Registro21441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
