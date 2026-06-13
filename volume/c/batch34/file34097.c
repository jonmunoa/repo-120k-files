// fichero 34097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34097;

Registro34097 crear_registro34097(int id) {
    Registro34097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34097(Registro34097 r) {
    return r.valor + r.id;
}
