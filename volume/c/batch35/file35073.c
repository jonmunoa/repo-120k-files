// fichero 35073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35073;

Registro35073 crear_registro35073(int id) {
    Registro35073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35073(Registro35073 r) {
    return r.valor + r.id;
}
