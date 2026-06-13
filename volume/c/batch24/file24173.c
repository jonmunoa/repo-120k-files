// fichero 24173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24173;

Registro24173 crear_registro24173(int id) {
    Registro24173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24173(Registro24173 r) {
    return r.valor + r.id;
}
