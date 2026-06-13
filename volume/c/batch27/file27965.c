// fichero 27965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27965;

Registro27965 crear_registro27965(int id) {
    Registro27965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27965(Registro27965 r) {
    return r.valor + r.id;
}
