// fichero 33421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33421;

Registro33421 crear_registro33421(int id) {
    Registro33421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33421(Registro33421 r) {
    return r.valor + r.id;
}
