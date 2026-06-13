// fichero 16857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16857;

Registro16857 crear_registro16857(int id) {
    Registro16857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16857(Registro16857 r) {
    return r.valor + r.id;
}
