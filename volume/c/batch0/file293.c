// fichero 293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro293;

Registro293 crear_registro293(int id) {
    Registro293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro293(Registro293 r) {
    return r.valor + r.id;
}
