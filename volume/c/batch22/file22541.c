// fichero 22541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22541;

Registro22541 crear_registro22541(int id) {
    Registro22541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22541(Registro22541 r) {
    return r.valor + r.id;
}
