// fichero 47589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47589;

Registro47589 crear_registro47589(int id) {
    Registro47589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47589(Registro47589 r) {
    return r.valor + r.id;
}
