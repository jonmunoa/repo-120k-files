// fichero 8685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8685;

Registro8685 crear_registro8685(int id) {
    Registro8685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8685(Registro8685 r) {
    return r.valor + r.id;
}
