// fichero 47653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47653;

Registro47653 crear_registro47653(int id) {
    Registro47653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47653(Registro47653 r) {
    return r.valor + r.id;
}
