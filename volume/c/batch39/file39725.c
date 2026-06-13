// fichero 39725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39725;

Registro39725 crear_registro39725(int id) {
    Registro39725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39725(Registro39725 r) {
    return r.valor + r.id;
}
