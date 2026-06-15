// fichero 33441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33441;

Registro33441 crear_registro33441(int id) {
    Registro33441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
