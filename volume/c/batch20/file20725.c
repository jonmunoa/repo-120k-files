// fichero 20725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20725;

Registro20725 crear_registro20725(int id) {
    Registro20725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20725(Registro20725 r) {
    return r.valor + r.id;
}
