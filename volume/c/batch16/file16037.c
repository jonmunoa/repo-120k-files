// fichero 16037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16037;

Registro16037 crear_registro16037(int id) {
    Registro16037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16037(Registro16037 r) {
    return r.valor + r.id;
}
