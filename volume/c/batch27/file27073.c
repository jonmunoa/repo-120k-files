// fichero 27073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27073;

Registro27073 crear_registro27073(int id) {
    Registro27073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27073(Registro27073 r) {
    return r.valor + r.id;
}
