// fichero 31065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31065;

Registro31065 crear_registro31065(int id) {
    Registro31065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31065(Registro31065 r) {
    return r.valor + r.id;
}
