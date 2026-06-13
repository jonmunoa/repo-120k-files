// fichero 11385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11385;

Registro11385 crear_registro11385(int id) {
    Registro11385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11385(Registro11385 r) {
    return r.valor + r.id;
}
