// fichero 2193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2193;

Registro2193 crear_registro2193(int id) {
    Registro2193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2193(Registro2193 r) {
    return r.valor + r.id;
}
