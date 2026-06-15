// fichero 22633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22633;

Registro22633 crear_registro22633(int id) {
    Registro22633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
