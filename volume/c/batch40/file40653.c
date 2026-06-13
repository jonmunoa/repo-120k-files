// fichero 40653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40653;

Registro40653 crear_registro40653(int id) {
    Registro40653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40653(Registro40653 r) {
    return r.valor + r.id;
}
