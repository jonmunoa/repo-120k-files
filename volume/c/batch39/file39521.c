// fichero 39521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39521;

Registro39521 crear_registro39521(int id) {
    Registro39521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
