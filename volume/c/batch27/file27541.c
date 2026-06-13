// fichero 27541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27541;

Registro27541 crear_registro27541(int id) {
    Registro27541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27541(Registro27541 r) {
    return r.valor + r.id;
}
