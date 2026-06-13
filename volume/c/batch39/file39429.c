// fichero 39429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39429;

Registro39429 crear_registro39429(int id) {
    Registro39429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39429(Registro39429 r) {
    return r.valor + r.id;
}
