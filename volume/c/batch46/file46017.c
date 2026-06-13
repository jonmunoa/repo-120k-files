// fichero 46017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46017;

Registro46017 crear_registro46017(int id) {
    Registro46017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46017(Registro46017 r) {
    return r.valor + r.id;
}
