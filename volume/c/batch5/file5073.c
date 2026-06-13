// fichero 5073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5073;

Registro5073 crear_registro5073(int id) {
    Registro5073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5073(Registro5073 r) {
    return r.valor + r.id;
}
