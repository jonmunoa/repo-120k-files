// fichero 16213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16213;

Registro16213 crear_registro16213(int id) {
    Registro16213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16213(Registro16213 r) {
    return r.valor + r.id;
}
