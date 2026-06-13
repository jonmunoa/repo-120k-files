// fichero 6373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6373;

Registro6373 crear_registro6373(int id) {
    Registro6373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6373(Registro6373 r) {
    return r.valor + r.id;
}
