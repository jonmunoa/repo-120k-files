// fichero 33549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33549;

Registro33549 crear_registro33549(int id) {
    Registro33549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33549(Registro33549 r) {
    return r.valor + r.id;
}
