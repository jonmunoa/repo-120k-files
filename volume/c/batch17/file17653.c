// fichero 17653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17653;

Registro17653 crear_registro17653(int id) {
    Registro17653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17653(Registro17653 r) {
    return r.valor + r.id;
}
