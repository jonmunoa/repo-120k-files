// fichero 20097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20097;

Registro20097 crear_registro20097(int id) {
    Registro20097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20097(Registro20097 r) {
    return r.valor + r.id;
}
