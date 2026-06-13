// fichero 12073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12073;

Registro12073 crear_registro12073(int id) {
    Registro12073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12073(Registro12073 r) {
    return r.valor + r.id;
}
