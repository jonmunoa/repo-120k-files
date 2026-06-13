// fichero 11029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11029;

Registro11029 crear_registro11029(int id) {
    Registro11029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11029(Registro11029 r) {
    return r.valor + r.id;
}
