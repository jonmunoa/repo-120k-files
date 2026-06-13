// fichero 39581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39581;

Registro39581 crear_registro39581(int id) {
    Registro39581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39581(Registro39581 r) {
    return r.valor + r.id;
}
