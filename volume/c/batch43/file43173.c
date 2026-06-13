// fichero 43173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43173;

Registro43173 crear_registro43173(int id) {
    Registro43173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43173(Registro43173 r) {
    return r.valor + r.id;
}
