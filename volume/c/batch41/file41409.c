// fichero 41409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41409;

Registro41409 crear_registro41409(int id) {
    Registro41409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41409(Registro41409 r) {
    return r.valor + r.id;
}
