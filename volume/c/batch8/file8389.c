// fichero 8389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8389;

Registro8389 crear_registro8389(int id) {
    Registro8389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8389(Registro8389 r) {
    return r.valor + r.id;
}
