// fichero 31357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31357;

Registro31357 crear_registro31357(int id) {
    Registro31357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31357(Registro31357 r) {
    return r.valor + r.id;
}
