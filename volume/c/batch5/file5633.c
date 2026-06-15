// fichero 5633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5633;

Registro5633 crear_registro5633(int id) {
    Registro5633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
