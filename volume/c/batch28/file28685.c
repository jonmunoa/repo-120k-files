// fichero 28685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28685;

Registro28685 crear_registro28685(int id) {
    Registro28685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28685(Registro28685 r) {
    return r.valor + r.id;
}
