// fichero 47385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47385;

Registro47385 crear_registro47385(int id) {
    Registro47385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47385(Registro47385 r) {
    return r.valor + r.id;
}
