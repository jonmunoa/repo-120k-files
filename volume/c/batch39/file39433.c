// fichero 39433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39433;

Registro39433 crear_registro39433(int id) {
    Registro39433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
