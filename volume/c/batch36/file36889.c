// fichero 36889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36889;

Registro36889 crear_registro36889(int id) {
    Registro36889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36889(Registro36889 r) {
    return r.valor + r.id;
}
