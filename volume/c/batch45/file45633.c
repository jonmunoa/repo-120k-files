// fichero 45633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45633;

Registro45633 crear_registro45633(int id) {
    Registro45633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
