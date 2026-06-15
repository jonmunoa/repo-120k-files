// fichero 39665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39665;

Registro39665 crear_registro39665(int id) {
    Registro39665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
