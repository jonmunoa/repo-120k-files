// fichero 24317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24317;

Registro24317 crear_registro24317(int id) {
    Registro24317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24317(Registro24317 r) {
    return r.valor + r.id;
}
