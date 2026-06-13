// fichero 6557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6557;

Registro6557 crear_registro6557(int id) {
    Registro6557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6557(Registro6557 r) {
    return r.valor + r.id;
}
