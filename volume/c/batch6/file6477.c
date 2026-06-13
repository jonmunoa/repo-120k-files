// fichero 6477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6477;

Registro6477 crear_registro6477(int id) {
    Registro6477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6477(Registro6477 r) {
    return r.valor + r.id;
}
