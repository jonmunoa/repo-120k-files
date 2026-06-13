// fichero 39465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39465;

Registro39465 crear_registro39465(int id) {
    Registro39465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39465(Registro39465 r) {
    return r.valor + r.id;
}
