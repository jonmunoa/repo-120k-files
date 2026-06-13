// fichero 3797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3797;

Registro3797 crear_registro3797(int id) {
    Registro3797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3797(Registro3797 r) {
    return r.valor + r.id;
}
