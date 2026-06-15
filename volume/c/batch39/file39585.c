// fichero 39585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39585;

Registro39585 crear_registro39585(int id) {
    Registro39585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
