// fichero 24261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24261;

Registro24261 crear_registro24261(int id) {
    Registro24261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24261(Registro24261 r) {
    return r.valor + r.id;
}
