// fichero 46429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46429;

Registro46429 crear_registro46429(int id) {
    Registro46429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46429(Registro46429 r) {
    return r.valor + r.id;
}
