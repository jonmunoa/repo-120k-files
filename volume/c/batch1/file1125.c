// fichero 1125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1125;

Registro1125 crear_registro1125(int id) {
    Registro1125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1125(Registro1125 r) {
    return r.valor + r.id;
}
