// fichero 49433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49433;

Registro49433 crear_registro49433(int id) {
    Registro49433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49433(Registro49433 r) {
    return r.valor + r.id;
}
