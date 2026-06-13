// fichero 39657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39657;

Registro39657 crear_registro39657(int id) {
    Registro39657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39657(Registro39657 r) {
    return r.valor + r.id;
}
