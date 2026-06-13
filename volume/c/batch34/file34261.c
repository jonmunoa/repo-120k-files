// fichero 34261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34261;

Registro34261 crear_registro34261(int id) {
    Registro34261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34261(Registro34261 r) {
    return r.valor + r.id;
}
