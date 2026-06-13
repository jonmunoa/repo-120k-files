// fichero 52261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52261;

Registro52261 crear_registro52261(int id) {
    Registro52261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52261(Registro52261 r) {
    return r.valor + r.id;
}
