// fichero 35337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35337;

Registro35337 crear_registro35337(int id) {
    Registro35337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35337(Registro35337 r) {
    return r.valor + r.id;
}
