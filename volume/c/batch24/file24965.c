// fichero 24965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24965;

Registro24965 crear_registro24965(int id) {
    Registro24965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24965(Registro24965 r) {
    return r.valor + r.id;
}
