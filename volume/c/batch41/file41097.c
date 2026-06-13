// fichero 41097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41097;

Registro41097 crear_registro41097(int id) {
    Registro41097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41097(Registro41097 r) {
    return r.valor + r.id;
}
