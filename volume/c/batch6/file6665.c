// fichero 6665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6665;

Registro6665 crear_registro6665(int id) {
    Registro6665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6665(Registro6665 r) {
    return r.valor + r.id;
}
