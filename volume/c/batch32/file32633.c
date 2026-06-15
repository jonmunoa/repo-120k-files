// fichero 32633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32633;

Registro32633 crear_registro32633(int id) {
    Registro32633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
