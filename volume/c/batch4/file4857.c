// fichero 4857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4857;

Registro4857 crear_registro4857(int id) {
    Registro4857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4857(Registro4857 r) {
    return r.valor + r.id;
}
