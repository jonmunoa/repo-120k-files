// fichero 53421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53421;

Registro53421 crear_registro53421(int id) {
    Registro53421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53421(Registro53421 r) {
    return r.valor + r.id;
}
