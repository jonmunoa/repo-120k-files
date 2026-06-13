// fichero 6065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6065;

Registro6065 crear_registro6065(int id) {
    Registro6065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6065(Registro6065 r) {
    return r.valor + r.id;
}
