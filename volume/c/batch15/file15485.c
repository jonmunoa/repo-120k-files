// fichero 15485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15485;

Registro15485 crear_registro15485(int id) {
    Registro15485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15485(Registro15485 r) {
    return r.valor + r.id;
}
