// fichero 37533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37533;

Registro37533 crear_registro37533(int id) {
    Registro37533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37533(Registro37533 r) {
    return r.valor + r.id;
}
