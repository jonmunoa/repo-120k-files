// fichero 52825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52825;

Registro52825 crear_registro52825(int id) {
    Registro52825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52825(Registro52825 r) {
    return r.valor + r.id;
}
