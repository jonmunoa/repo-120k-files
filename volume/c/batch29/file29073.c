// fichero 29073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29073;

Registro29073 crear_registro29073(int id) {
    Registro29073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29073(Registro29073 r) {
    return r.valor + r.id;
}
