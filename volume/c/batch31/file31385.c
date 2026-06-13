// fichero 31385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31385;

Registro31385 crear_registro31385(int id) {
    Registro31385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31385(Registro31385 r) {
    return r.valor + r.id;
}
