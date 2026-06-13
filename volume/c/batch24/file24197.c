// fichero 24197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24197;

Registro24197 crear_registro24197(int id) {
    Registro24197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24197(Registro24197 r) {
    return r.valor + r.id;
}
