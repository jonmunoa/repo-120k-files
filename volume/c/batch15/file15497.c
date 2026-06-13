// fichero 15497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15497;

Registro15497 crear_registro15497(int id) {
    Registro15497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15497(Registro15497 r) {
    return r.valor + r.id;
}
