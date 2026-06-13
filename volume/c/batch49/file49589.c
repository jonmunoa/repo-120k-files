// fichero 49589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49589;

Registro49589 crear_registro49589(int id) {
    Registro49589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49589(Registro49589 r) {
    return r.valor + r.id;
}
