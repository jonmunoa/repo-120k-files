// fichero 32161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32161;

Registro32161 crear_registro32161(int id) {
    Registro32161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32161(Registro32161 r) {
    return r.valor + r.id;
}
