// fichero 52389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52389;

Registro52389 crear_registro52389(int id) {
    Registro52389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52389(Registro52389 r) {
    return r.valor + r.id;
}
