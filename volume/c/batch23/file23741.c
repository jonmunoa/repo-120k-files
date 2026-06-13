// fichero 23741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23741;

Registro23741 crear_registro23741(int id) {
    Registro23741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23741(Registro23741 r) {
    return r.valor + r.id;
}
