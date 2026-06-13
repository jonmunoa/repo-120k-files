// fichero 39073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39073;

Registro39073 crear_registro39073(int id) {
    Registro39073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39073(Registro39073 r) {
    return r.valor + r.id;
}
