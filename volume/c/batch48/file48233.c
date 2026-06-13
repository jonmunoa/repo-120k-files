// fichero 48233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48233;

Registro48233 crear_registro48233(int id) {
    Registro48233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48233(Registro48233 r) {
    return r.valor + r.id;
}
