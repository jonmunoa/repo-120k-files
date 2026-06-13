// fichero 10385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10385;

Registro10385 crear_registro10385(int id) {
    Registro10385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10385(Registro10385 r) {
    return r.valor + r.id;
}
