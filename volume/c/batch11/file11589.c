// fichero 11589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11589;

Registro11589 crear_registro11589(int id) {
    Registro11589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11589(Registro11589 r) {
    return r.valor + r.id;
}
