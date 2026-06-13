// fichero 6553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6553;

Registro6553 crear_registro6553(int id) {
    Registro6553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6553(Registro6553 r) {
    return r.valor + r.id;
}
