// fichero 8413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8413;

Registro8413 crear_registro8413(int id) {
    Registro8413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8413(Registro8413 r) {
    return r.valor + r.id;
}
