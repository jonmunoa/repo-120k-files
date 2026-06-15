// fichero 39469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39469;

Registro39469 crear_registro39469(int id) {
    Registro39469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
