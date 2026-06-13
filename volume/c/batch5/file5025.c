// fichero 5025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5025;

Registro5025 crear_registro5025(int id) {
    Registro5025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5025(Registro5025 r) {
    return r.valor + r.id;
}
