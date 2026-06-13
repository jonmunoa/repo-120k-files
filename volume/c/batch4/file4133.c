// fichero 4133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4133;

Registro4133 crear_registro4133(int id) {
    Registro4133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4133(Registro4133 r) {
    return r.valor + r.id;
}
