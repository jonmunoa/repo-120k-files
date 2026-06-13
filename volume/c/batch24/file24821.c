// fichero 24821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24821;

Registro24821 crear_registro24821(int id) {
    Registro24821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24821(Registro24821 r) {
    return r.valor + r.id;
}
