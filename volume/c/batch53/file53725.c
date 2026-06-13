// fichero 53725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53725;

Registro53725 crear_registro53725(int id) {
    Registro53725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53725(Registro53725 r) {
    return r.valor + r.id;
}
