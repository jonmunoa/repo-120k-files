// fichero 16073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16073;

Registro16073 crear_registro16073(int id) {
    Registro16073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16073(Registro16073 r) {
    return r.valor + r.id;
}
