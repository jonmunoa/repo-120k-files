// fichero 15245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15245;

Registro15245 crear_registro15245(int id) {
    Registro15245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15245(Registro15245 r) {
    return r.valor + r.id;
}
