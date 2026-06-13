// fichero 49213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49213;

Registro49213 crear_registro49213(int id) {
    Registro49213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49213(Registro49213 r) {
    return r.valor + r.id;
}
