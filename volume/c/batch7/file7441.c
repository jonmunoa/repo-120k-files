// fichero 7441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7441;

Registro7441 crear_registro7441(int id) {
    Registro7441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
