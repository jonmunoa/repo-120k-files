// fichero 50025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50025;

Registro50025 crear_registro50025(int id) {
    Registro50025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50025(Registro50025 r) {
    return r.valor + r.id;
}
