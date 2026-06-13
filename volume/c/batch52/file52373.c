// fichero 52373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52373;

Registro52373 crear_registro52373(int id) {
    Registro52373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52373(Registro52373 r) {
    return r.valor + r.id;
}
