// fichero 28065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28065;

Registro28065 crear_registro28065(int id) {
    Registro28065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28065(Registro28065 r) {
    return r.valor + r.id;
}
