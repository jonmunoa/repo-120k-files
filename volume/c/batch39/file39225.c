// fichero 39225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39225;

Registro39225 crear_registro39225(int id) {
    Registro39225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39225(Registro39225 r) {
    return r.valor + r.id;
}
