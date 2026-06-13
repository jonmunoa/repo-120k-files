// fichero 15001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15001;

Registro15001 crear_registro15001(int id) {
    Registro15001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15001(Registro15001 r) {
    return r.valor + r.id;
}
