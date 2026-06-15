// fichero 15045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15045;

Registro15045 crear_registro15045(int id) {
    Registro15045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
