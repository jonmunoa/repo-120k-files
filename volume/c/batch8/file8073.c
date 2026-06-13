// fichero 8073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8073;

Registro8073 crear_registro8073(int id) {
    Registro8073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8073(Registro8073 r) {
    return r.valor + r.id;
}
