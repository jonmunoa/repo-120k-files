// fichero 37541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37541;

Registro37541 crear_registro37541(int id) {
    Registro37541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37541(Registro37541 r) {
    return r.valor + r.id;
}
