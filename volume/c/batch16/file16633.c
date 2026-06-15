// fichero 16633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16633;

Registro16633 crear_registro16633(int id) {
    Registro16633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
