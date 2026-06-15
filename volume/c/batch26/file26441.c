// fichero 26441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26441;

Registro26441 crear_registro26441(int id) {
    Registro26441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
