// fichero 28217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28217;

Registro28217 crear_registro28217(int id) {
    Registro28217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28217(Registro28217 r) {
    return r.valor + r.id;
}
