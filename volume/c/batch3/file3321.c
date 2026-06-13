// fichero 3321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3321;

Registro3321 crear_registro3321(int id) {
    Registro3321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3321(Registro3321 r) {
    return r.valor + r.id;
}
