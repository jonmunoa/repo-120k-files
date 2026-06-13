// fichero 39533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39533;

Registro39533 crear_registro39533(int id) {
    Registro39533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39533(Registro39533 r) {
    return r.valor + r.id;
}
