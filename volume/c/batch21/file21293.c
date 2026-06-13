// fichero 21293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21293;

Registro21293 crear_registro21293(int id) {
    Registro21293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21293(Registro21293 r) {
    return r.valor + r.id;
}
