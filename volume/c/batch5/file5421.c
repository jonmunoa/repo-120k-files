// fichero 5421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5421;

Registro5421 crear_registro5421(int id) {
    Registro5421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5421(Registro5421 r) {
    return r.valor + r.id;
}
