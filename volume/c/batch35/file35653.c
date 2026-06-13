// fichero 35653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35653;

Registro35653 crear_registro35653(int id) {
    Registro35653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35653(Registro35653 r) {
    return r.valor + r.id;
}
