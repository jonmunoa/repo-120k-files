// fichero 52581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52581;

Registro52581 crear_registro52581(int id) {
    Registro52581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52581(Registro52581 r) {
    return r.valor + r.id;
}
