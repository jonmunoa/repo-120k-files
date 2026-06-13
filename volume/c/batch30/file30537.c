// fichero 30537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30537;

Registro30537 crear_registro30537(int id) {
    Registro30537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30537(Registro30537 r) {
    return r.valor + r.id;
}
