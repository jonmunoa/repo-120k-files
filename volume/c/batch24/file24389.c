// fichero 24389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24389;

Registro24389 crear_registro24389(int id) {
    Registro24389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24389(Registro24389 r) {
    return r.valor + r.id;
}
