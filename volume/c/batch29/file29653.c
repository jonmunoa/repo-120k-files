// fichero 29653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29653;

Registro29653 crear_registro29653(int id) {
    Registro29653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29653(Registro29653 r) {
    return r.valor + r.id;
}
