// fichero 261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro261;

Registro261 crear_registro261(int id) {
    Registro261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro261(Registro261 r) {
    return r.valor + r.id;
}
