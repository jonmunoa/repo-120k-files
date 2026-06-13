// fichero 52605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52605;

Registro52605 crear_registro52605(int id) {
    Registro52605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52605(Registro52605 r) {
    return r.valor + r.id;
}
