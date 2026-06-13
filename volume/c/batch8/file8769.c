// fichero 8769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8769;

Registro8769 crear_registro8769(int id) {
    Registro8769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8769(Registro8769 r) {
    return r.valor + r.id;
}
