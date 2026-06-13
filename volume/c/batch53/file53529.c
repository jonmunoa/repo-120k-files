// fichero 53529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53529;

Registro53529 crear_registro53529(int id) {
    Registro53529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53529(Registro53529 r) {
    return r.valor + r.id;
}
