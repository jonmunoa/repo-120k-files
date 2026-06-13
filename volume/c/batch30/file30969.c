// fichero 30969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30969;

Registro30969 crear_registro30969(int id) {
    Registro30969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30969(Registro30969 r) {
    return r.valor + r.id;
}
