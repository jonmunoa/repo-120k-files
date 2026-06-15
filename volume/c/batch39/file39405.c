// fichero 39405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39405;

Registro39405 crear_registro39405(int id) {
    Registro39405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
