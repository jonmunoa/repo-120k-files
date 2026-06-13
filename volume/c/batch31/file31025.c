// fichero 31025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31025;

Registro31025 crear_registro31025(int id) {
    Registro31025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31025(Registro31025 r) {
    return r.valor + r.id;
}
