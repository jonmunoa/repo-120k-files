// fichero 28125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28125;

Registro28125 crear_registro28125(int id) {
    Registro28125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28125(Registro28125 r) {
    return r.valor + r.id;
}
