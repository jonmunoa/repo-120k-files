// fichero 41589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41589;

Registro41589 crear_registro41589(int id) {
    Registro41589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41589(Registro41589 r) {
    return r.valor + r.id;
}
