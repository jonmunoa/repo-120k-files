// fichero 47025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47025;

Registro47025 crear_registro47025(int id) {
    Registro47025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47025(Registro47025 r) {
    return r.valor + r.id;
}
