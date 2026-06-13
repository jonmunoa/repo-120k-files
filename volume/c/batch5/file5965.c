// fichero 5965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5965;

Registro5965 crear_registro5965(int id) {
    Registro5965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5965(Registro5965 r) {
    return r.valor + r.id;
}
