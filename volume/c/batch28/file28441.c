// fichero 28441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28441;

Registro28441 crear_registro28441(int id) {
    Registro28441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
