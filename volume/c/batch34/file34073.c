// fichero 34073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34073;

Registro34073 crear_registro34073(int id) {
    Registro34073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34073(Registro34073 r) {
    return r.valor + r.id;
}
