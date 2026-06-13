// fichero 30173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30173;

Registro30173 crear_registro30173(int id) {
    Registro30173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30173(Registro30173 r) {
    return r.valor + r.id;
}
