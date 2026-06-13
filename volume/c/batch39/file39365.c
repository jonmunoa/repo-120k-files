// fichero 39365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39365;

Registro39365 crear_registro39365(int id) {
    Registro39365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39365(Registro39365 r) {
    return r.valor + r.id;
}
