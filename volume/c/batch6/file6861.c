// fichero 6861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6861;

Registro6861 crear_registro6861(int id) {
    Registro6861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6861(Registro6861 r) {
    return r.valor + r.id;
}
