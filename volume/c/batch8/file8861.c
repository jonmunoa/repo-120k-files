// fichero 8861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8861;

Registro8861 crear_registro8861(int id) {
    Registro8861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8861(Registro8861 r) {
    return r.valor + r.id;
}
