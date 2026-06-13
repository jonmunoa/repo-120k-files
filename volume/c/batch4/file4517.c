// fichero 4517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4517;

Registro4517 crear_registro4517(int id) {
    Registro4517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4517(Registro4517 r) {
    return r.valor + r.id;
}
