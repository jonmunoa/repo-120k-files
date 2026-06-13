// fichero 48741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48741;

Registro48741 crear_registro48741(int id) {
    Registro48741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48741(Registro48741 r) {
    return r.valor + r.id;
}
