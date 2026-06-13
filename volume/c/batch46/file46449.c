// fichero 46449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46449;

Registro46449 crear_registro46449(int id) {
    Registro46449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46449(Registro46449 r) {
    return r.valor + r.id;
}
