// fichero 26865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26865;

Registro26865 crear_registro26865(int id) {
    Registro26865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26865(Registro26865 r) {
    return r.valor + r.id;
}
