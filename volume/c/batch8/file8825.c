// fichero 8825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8825;

Registro8825 crear_registro8825(int id) {
    Registro8825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8825(Registro8825 r) {
    return r.valor + r.id;
}
