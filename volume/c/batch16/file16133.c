// fichero 16133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16133;

Registro16133 crear_registro16133(int id) {
    Registro16133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16133(Registro16133 r) {
    return r.valor + r.id;
}
