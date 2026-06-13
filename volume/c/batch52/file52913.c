// fichero 52913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52913;

Registro52913 crear_registro52913(int id) {
    Registro52913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52913(Registro52913 r) {
    return r.valor + r.id;
}
