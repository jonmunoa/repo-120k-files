// fichero 32965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32965;

Registro32965 crear_registro32965(int id) {
    Registro32965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32965(Registro32965 r) {
    return r.valor + r.id;
}
