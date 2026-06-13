// fichero 47517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47517;

Registro47517 crear_registro47517(int id) {
    Registro47517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47517(Registro47517 r) {
    return r.valor + r.id;
}
