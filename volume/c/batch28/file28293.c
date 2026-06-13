// fichero 28293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28293;

Registro28293 crear_registro28293(int id) {
    Registro28293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28293(Registro28293 r) {
    return r.valor + r.id;
}
