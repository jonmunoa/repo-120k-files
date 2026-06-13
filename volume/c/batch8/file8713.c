// fichero 8713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8713;

Registro8713 crear_registro8713(int id) {
    Registro8713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8713(Registro8713 r) {
    return r.valor + r.id;
}
