// fichero 26249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26249;

Registro26249 crear_registro26249(int id) {
    Registro26249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26249(Registro26249 r) {
    return r.valor + r.id;
}
