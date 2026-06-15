// fichero 49441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49441;

Registro49441 crear_registro49441(int id) {
    Registro49441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
