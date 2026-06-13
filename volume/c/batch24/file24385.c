// fichero 24385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24385;

Registro24385 crear_registro24385(int id) {
    Registro24385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24385(Registro24385 r) {
    return r.valor + r.id;
}
