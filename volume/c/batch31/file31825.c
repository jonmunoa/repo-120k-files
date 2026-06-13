// fichero 31825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31825;

Registro31825 crear_registro31825(int id) {
    Registro31825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31825(Registro31825 r) {
    return r.valor + r.id;
}
