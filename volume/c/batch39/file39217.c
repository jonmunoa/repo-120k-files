// fichero 39217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39217;

Registro39217 crear_registro39217(int id) {
    Registro39217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
