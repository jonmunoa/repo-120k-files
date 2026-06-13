// fichero 24305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24305;

Registro24305 crear_registro24305(int id) {
    Registro24305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24305(Registro24305 r) {
    return r.valor + r.id;
}
