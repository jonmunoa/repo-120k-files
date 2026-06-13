// fichero 28145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28145;

Registro28145 crear_registro28145(int id) {
    Registro28145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28145(Registro28145 r) {
    return r.valor + r.id;
}
