// fichero 11073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11073;

Registro11073 crear_registro11073(int id) {
    Registro11073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11073(Registro11073 r) {
    return r.valor + r.id;
}
