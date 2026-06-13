// fichero 35097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35097;

Registro35097 crear_registro35097(int id) {
    Registro35097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35097(Registro35097 r) {
    return r.valor + r.id;
}
