// fichero 25073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25073;

Registro25073 crear_registro25073(int id) {
    Registro25073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25073(Registro25073 r) {
    return r.valor + r.id;
}
