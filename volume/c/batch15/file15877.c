// fichero 15877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15877;

Registro15877 crear_registro15877(int id) {
    Registro15877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15877(Registro15877 r) {
    return r.valor + r.id;
}
