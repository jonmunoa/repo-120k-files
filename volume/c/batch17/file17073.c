// fichero 17073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17073;

Registro17073 crear_registro17073(int id) {
    Registro17073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17073(Registro17073 r) {
    return r.valor + r.id;
}
