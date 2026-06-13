// fichero 39933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39933;

Registro39933 crear_registro39933(int id) {
    Registro39933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39933(Registro39933 r) {
    return r.valor + r.id;
}
