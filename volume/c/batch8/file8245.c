// fichero 8245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8245;

Registro8245 crear_registro8245(int id) {
    Registro8245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8245(Registro8245 r) {
    return r.valor + r.id;
}
