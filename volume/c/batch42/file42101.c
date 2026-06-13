// fichero 42101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42101;

Registro42101 crear_registro42101(int id) {
    Registro42101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42101(Registro42101 r) {
    return r.valor + r.id;
}
