// fichero 4821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4821;

Registro4821 crear_registro4821(int id) {
    Registro4821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4821(Registro4821 r) {
    return r.valor + r.id;
}
