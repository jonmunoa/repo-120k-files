// fichero 685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro685;

Registro685 crear_registro685(int id) {
    Registro685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro685(Registro685 r) {
    return r.valor + r.id;
}
