// fichero 52133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52133;

Registro52133 crear_registro52133(int id) {
    Registro52133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52133(Registro52133 r) {
    return r.valor + r.id;
}
