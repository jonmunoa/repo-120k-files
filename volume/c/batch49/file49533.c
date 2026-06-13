// fichero 49533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49533;

Registro49533 crear_registro49533(int id) {
    Registro49533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49533(Registro49533 r) {
    return r.valor + r.id;
}
