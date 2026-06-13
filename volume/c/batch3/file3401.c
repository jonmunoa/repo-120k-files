// fichero 3401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3401;

Registro3401 crear_registro3401(int id) {
    Registro3401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3401(Registro3401 r) {
    return r.valor + r.id;
}
