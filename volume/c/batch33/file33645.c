// fichero 33645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33645;

Registro33645 crear_registro33645(int id) {
    Registro33645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33645(Registro33645 r) {
    return r.valor + r.id;
}
