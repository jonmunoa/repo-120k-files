// fichero 12537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12537;

Registro12537 crear_registro12537(int id) {
    Registro12537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12537(Registro12537 r) {
    return r.valor + r.id;
}
