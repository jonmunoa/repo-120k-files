// fichero 46069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46069;

Registro46069 crear_registro46069(int id) {
    Registro46069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46069(Registro46069 r) {
    return r.valor + r.id;
}
