// fichero 4173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4173;

Registro4173 crear_registro4173(int id) {
    Registro4173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4173(Registro4173 r) {
    return r.valor + r.id;
}
