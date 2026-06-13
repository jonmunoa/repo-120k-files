// fichero 53289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53289;

Registro53289 crear_registro53289(int id) {
    Registro53289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53289(Registro53289 r) {
    return r.valor + r.id;
}
