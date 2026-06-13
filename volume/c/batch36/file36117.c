// fichero 36117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36117;

Registro36117 crear_registro36117(int id) {
    Registro36117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36117(Registro36117 r) {
    return r.valor + r.id;
}
