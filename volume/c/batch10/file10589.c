// fichero 10589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10589;

Registro10589 crear_registro10589(int id) {
    Registro10589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10589(Registro10589 r) {
    return r.valor + r.id;
}
