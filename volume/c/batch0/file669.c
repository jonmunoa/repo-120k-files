// fichero 669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro669;

Registro669 crear_registro669(int id) {
    Registro669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro669(Registro669 r) {
    return r.valor + r.id;
}
