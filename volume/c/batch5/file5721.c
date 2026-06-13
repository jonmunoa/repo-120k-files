// fichero 5721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5721;

Registro5721 crear_registro5721(int id) {
    Registro5721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5721(Registro5721 r) {
    return r.valor + r.id;
}
