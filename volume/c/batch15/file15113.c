// fichero 15113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15113;

Registro15113 crear_registro15113(int id) {
    Registro15113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15113(Registro15113 r) {
    return r.valor + r.id;
}
