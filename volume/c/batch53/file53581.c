// fichero 53581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53581;

Registro53581 crear_registro53581(int id) {
    Registro53581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53581(Registro53581 r) {
    return r.valor + r.id;
}
