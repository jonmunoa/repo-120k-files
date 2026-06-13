// fichero 30385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30385;

Registro30385 crear_registro30385(int id) {
    Registro30385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30385(Registro30385 r) {
    return r.valor + r.id;
}
