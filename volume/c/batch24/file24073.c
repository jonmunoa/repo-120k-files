// fichero 24073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24073;

Registro24073 crear_registro24073(int id) {
    Registro24073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24073(Registro24073 r) {
    return r.valor + r.id;
}
