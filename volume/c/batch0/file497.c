// fichero 497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro497;

Registro497 crear_registro497(int id) {
    Registro497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro497(Registro497 r) {
    return r.valor + r.id;
}
