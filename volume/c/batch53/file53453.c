// fichero 53453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53453;

Registro53453 crear_registro53453(int id) {
    Registro53453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53453(Registro53453 r) {
    return r.valor + r.id;
}
