// fichero 3033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3033;

Registro3033 crear_registro3033(int id) {
    Registro3033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3033(Registro3033 r) {
    return r.valor + r.id;
}
