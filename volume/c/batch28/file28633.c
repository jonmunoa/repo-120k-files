// fichero 28633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28633;

Registro28633 crear_registro28633(int id) {
    Registro28633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
