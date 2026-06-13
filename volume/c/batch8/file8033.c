// fichero 8033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8033;

Registro8033 crear_registro8033(int id) {
    Registro8033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8033(Registro8033 r) {
    return r.valor + r.id;
}
