// fichero 17277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17277;

Registro17277 crear_registro17277(int id) {
    Registro17277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17277(Registro17277 r) {
    return r.valor + r.id;
}
