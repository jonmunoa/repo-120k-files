// fichero 37305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37305;

Registro37305 crear_registro37305(int id) {
    Registro37305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37305(Registro37305 r) {
    return r.valor + r.id;
}
