// fichero 3013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3013;

Registro3013 crear_registro3013(int id) {
    Registro3013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3013(Registro3013 r) {
    return r.valor + r.id;
}
