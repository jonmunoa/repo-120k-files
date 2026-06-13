// fichero 3245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3245;

Registro3245 crear_registro3245(int id) {
    Registro3245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3245(Registro3245 r) {
    return r.valor + r.id;
}
