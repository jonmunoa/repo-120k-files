// fichero 50857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50857;

Registro50857 crear_registro50857(int id) {
    Registro50857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50857(Registro50857 r) {
    return r.valor + r.id;
}
