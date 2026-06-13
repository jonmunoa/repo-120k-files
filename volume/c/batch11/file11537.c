// fichero 11537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11537;

Registro11537 crear_registro11537(int id) {
    Registro11537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11537(Registro11537 r) {
    return r.valor + r.id;
}
