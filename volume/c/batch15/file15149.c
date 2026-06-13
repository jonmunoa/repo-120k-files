// fichero 15149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15149;

Registro15149 crear_registro15149(int id) {
    Registro15149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15149(Registro15149 r) {
    return r.valor + r.id;
}
