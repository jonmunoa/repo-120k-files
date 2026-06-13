// fichero 8541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8541;

Registro8541 crear_registro8541(int id) {
    Registro8541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8541(Registro8541 r) {
    return r.valor + r.id;
}
