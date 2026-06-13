// fichero 15049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15049;

Registro15049 crear_registro15049(int id) {
    Registro15049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15049(Registro15049 r) {
    return r.valor + r.id;
}
