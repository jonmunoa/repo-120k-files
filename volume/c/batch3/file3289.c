// fichero 3289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3289;

Registro3289 crear_registro3289(int id) {
    Registro3289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3289(Registro3289 r) {
    return r.valor + r.id;
}
