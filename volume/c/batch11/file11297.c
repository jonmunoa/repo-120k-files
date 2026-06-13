// fichero 11297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11297;

Registro11297 crear_registro11297(int id) {
    Registro11297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11297(Registro11297 r) {
    return r.valor + r.id;
}
