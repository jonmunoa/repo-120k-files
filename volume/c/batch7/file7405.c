// fichero 7405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7405;

Registro7405 crear_registro7405(int id) {
    Registro7405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7405(Registro7405 r) {
    return r.valor + r.id;
}
