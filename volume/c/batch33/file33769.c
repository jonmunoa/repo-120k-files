// fichero 33769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33769;

Registro33769 crear_registro33769(int id) {
    Registro33769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33769(Registro33769 r) {
    return r.valor + r.id;
}
