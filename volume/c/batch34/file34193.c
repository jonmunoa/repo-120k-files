// fichero 34193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34193;

Registro34193 crear_registro34193(int id) {
    Registro34193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34193(Registro34193 r) {
    return r.valor + r.id;
}
