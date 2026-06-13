// fichero 30821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30821;

Registro30821 crear_registro30821(int id) {
    Registro30821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30821(Registro30821 r) {
    return r.valor + r.id;
}
