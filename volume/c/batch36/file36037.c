// fichero 36037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36037;

Registro36037 crear_registro36037(int id) {
    Registro36037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36037(Registro36037 r) {
    return r.valor + r.id;
}
