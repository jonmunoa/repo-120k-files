// fichero 8213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8213;

Registro8213 crear_registro8213(int id) {
    Registro8213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8213(Registro8213 r) {
    return r.valor + r.id;
}
