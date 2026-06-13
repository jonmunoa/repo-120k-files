// fichero 28421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28421;

Registro28421 crear_registro28421(int id) {
    Registro28421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28421(Registro28421 r) {
    return r.valor + r.id;
}
