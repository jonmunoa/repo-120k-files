// fichero 6069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6069;

Registro6069 crear_registro6069(int id) {
    Registro6069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6069(Registro6069 r) {
    return r.valor + r.id;
}
