// fichero 32421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32421;

Registro32421 crear_registro32421(int id) {
    Registro32421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32421(Registro32421 r) {
    return r.valor + r.id;
}
