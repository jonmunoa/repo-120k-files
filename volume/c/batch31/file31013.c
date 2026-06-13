// fichero 31013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31013;

Registro31013 crear_registro31013(int id) {
    Registro31013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31013(Registro31013 r) {
    return r.valor + r.id;
}
