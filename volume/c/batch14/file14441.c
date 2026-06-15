// fichero 14441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14441;

Registro14441 crear_registro14441(int id) {
    Registro14441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
