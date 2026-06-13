// fichero 28025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28025;

Registro28025 crear_registro28025(int id) {
    Registro28025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28025(Registro28025 r) {
    return r.valor + r.id;
}
