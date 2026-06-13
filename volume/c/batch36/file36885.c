// fichero 36885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36885;

Registro36885 crear_registro36885(int id) {
    Registro36885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36885(Registro36885 r) {
    return r.valor + r.id;
}
