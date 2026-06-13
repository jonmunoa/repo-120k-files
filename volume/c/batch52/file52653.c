// fichero 52653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52653;

Registro52653 crear_registro52653(int id) {
    Registro52653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52653(Registro52653 r) {
    return r.valor + r.id;
}
