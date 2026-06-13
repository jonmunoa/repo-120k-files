// fichero 28589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28589;

Registro28589 crear_registro28589(int id) {
    Registro28589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28589(Registro28589 r) {
    return r.valor + r.id;
}
