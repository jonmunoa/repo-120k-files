// fichero 30501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30501;

Registro30501 crear_registro30501(int id) {
    Registro30501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30501(Registro30501 r) {
    return r.valor + r.id;
}
