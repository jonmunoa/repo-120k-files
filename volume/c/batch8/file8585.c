// fichero 8585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8585;

Registro8585 crear_registro8585(int id) {
    Registro8585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8585(Registro8585 r) {
    return r.valor + r.id;
}
