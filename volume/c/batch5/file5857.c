// fichero 5857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5857;

Registro5857 crear_registro5857(int id) {
    Registro5857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5857(Registro5857 r) {
    return r.valor + r.id;
}
