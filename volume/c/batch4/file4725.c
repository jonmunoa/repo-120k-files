// fichero 4725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4725;

Registro4725 crear_registro4725(int id) {
    Registro4725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4725(Registro4725 r) {
    return r.valor + r.id;
}
