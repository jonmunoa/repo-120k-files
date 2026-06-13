// fichero 53553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53553;

Registro53553 crear_registro53553(int id) {
    Registro53553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53553(Registro53553 r) {
    return r.valor + r.id;
}
