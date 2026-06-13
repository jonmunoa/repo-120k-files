// fichero 33493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33493;

Registro33493 crear_registro33493(int id) {
    Registro33493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33493(Registro33493 r) {
    return r.valor + r.id;
}
