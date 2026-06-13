// fichero 8653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8653;

Registro8653 crear_registro8653(int id) {
    Registro8653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8653(Registro8653 r) {
    return r.valor + r.id;
}
