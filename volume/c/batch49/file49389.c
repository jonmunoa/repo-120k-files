// fichero 49389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49389;

Registro49389 crear_registro49389(int id) {
    Registro49389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49389(Registro49389 r) {
    return r.valor + r.id;
}
