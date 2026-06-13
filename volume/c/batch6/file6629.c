// fichero 6629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6629;

Registro6629 crear_registro6629(int id) {
    Registro6629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6629(Registro6629 r) {
    return r.valor + r.id;
}
