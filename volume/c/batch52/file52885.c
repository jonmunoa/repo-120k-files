// fichero 52885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52885;

Registro52885 crear_registro52885(int id) {
    Registro52885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52885(Registro52885 r) {
    return r.valor + r.id;
}
