// fichero 5653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5653;

Registro5653 crear_registro5653(int id) {
    Registro5653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5653(Registro5653 r) {
    return r.valor + r.id;
}
