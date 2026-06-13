// fichero 28069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28069;

Registro28069 crear_registro28069(int id) {
    Registro28069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28069(Registro28069 r) {
    return r.valor + r.id;
}
