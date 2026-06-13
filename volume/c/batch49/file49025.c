// fichero 49025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49025;

Registro49025 crear_registro49025(int id) {
    Registro49025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49025(Registro49025 r) {
    return r.valor + r.id;
}
