// fichero 39265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39265;

Registro39265 crear_registro39265(int id) {
    Registro39265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39265(Registro39265 r) {
    return r.valor + r.id;
}
