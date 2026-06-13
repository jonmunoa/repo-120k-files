// fichero 53381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53381;

Registro53381 crear_registro53381(int id) {
    Registro53381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53381(Registro53381 r) {
    return r.valor + r.id;
}
