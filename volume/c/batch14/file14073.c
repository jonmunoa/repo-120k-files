// fichero 14073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14073;

Registro14073 crear_registro14073(int id) {
    Registro14073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14073(Registro14073 r) {
    return r.valor + r.id;
}
