// fichero 19073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19073;

Registro19073 crear_registro19073(int id) {
    Registro19073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19073(Registro19073 r) {
    return r.valor + r.id;
}
