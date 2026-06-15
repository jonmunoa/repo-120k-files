// fichero 15633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15633;

Registro15633 crear_registro15633(int id) {
    Registro15633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
