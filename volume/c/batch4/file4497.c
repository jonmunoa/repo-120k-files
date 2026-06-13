// fichero 4497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4497;

Registro4497 crear_registro4497(int id) {
    Registro4497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4497(Registro4497 r) {
    return r.valor + r.id;
}
