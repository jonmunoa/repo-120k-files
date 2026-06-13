// fichero 15189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15189;

Registro15189 crear_registro15189(int id) {
    Registro15189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15189(Registro15189 r) {
    return r.valor + r.id;
}
