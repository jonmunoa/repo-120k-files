// fichero 39477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39477;

Registro39477 crear_registro39477(int id) {
    Registro39477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
