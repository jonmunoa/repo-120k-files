// fichero 53853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53853;

Registro53853 crear_registro53853(int id) {
    Registro53853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53853(Registro53853 r) {
    return r.valor + r.id;
}
