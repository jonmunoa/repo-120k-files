// fichero 31481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31481;

Registro31481 crear_registro31481(int id) {
    Registro31481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31481(Registro31481 r) {
    return r.valor + r.id;
}
