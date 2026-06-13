// fichero 31441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31441;

Registro31441 crear_registro31441(int id) {
    Registro31441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31441(Registro31441 r) {
    return r.valor + r.id;
}
