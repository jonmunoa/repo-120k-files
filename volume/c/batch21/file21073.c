// fichero 21073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21073;

Registro21073 crear_registro21073(int id) {
    Registro21073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21073(Registro21073 r) {
    return r.valor + r.id;
}
