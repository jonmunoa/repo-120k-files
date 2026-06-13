// fichero 8173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8173;

Registro8173 crear_registro8173(int id) {
    Registro8173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8173(Registro8173 r) {
    return r.valor + r.id;
}
