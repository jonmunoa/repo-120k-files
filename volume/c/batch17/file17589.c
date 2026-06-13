// fichero 17589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17589;

Registro17589 crear_registro17589(int id) {
    Registro17589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17589(Registro17589 r) {
    return r.valor + r.id;
}
