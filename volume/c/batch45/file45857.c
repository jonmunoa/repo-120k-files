// fichero 45857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45857;

Registro45857 crear_registro45857(int id) {
    Registro45857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45857(Registro45857 r) {
    return r.valor + r.id;
}
