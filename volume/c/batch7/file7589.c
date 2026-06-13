// fichero 7589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7589;

Registro7589 crear_registro7589(int id) {
    Registro7589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7589(Registro7589 r) {
    return r.valor + r.id;
}
