// fichero 39389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39389;

Registro39389 crear_registro39389(int id) {
    Registro39389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
