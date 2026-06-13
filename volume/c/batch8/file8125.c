// fichero 8125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8125;

Registro8125 crear_registro8125(int id) {
    Registro8125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8125(Registro8125 r) {
    return r.valor + r.id;
}
