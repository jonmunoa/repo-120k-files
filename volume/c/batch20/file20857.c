// fichero 20857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20857;

Registro20857 crear_registro20857(int id) {
    Registro20857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20857(Registro20857 r) {
    return r.valor + r.id;
}
