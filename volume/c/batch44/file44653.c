// fichero 44653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44653;

Registro44653 crear_registro44653(int id) {
    Registro44653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44653(Registro44653 r) {
    return r.valor + r.id;
}
