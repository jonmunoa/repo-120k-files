// fichero 24573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24573;

Registro24573 crear_registro24573(int id) {
    Registro24573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24573(Registro24573 r) {
    return r.valor + r.id;
}
