// fichero 31861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31861;

Registro31861 crear_registro31861(int id) {
    Registro31861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31861(Registro31861 r) {
    return r.valor + r.id;
}
