// fichero 53449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53449;

Registro53449 crear_registro53449(int id) {
    Registro53449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53449(Registro53449 r) {
    return r.valor + r.id;
}
