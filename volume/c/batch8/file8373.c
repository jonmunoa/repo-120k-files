// fichero 8373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8373;

Registro8373 crear_registro8373(int id) {
    Registro8373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8373(Registro8373 r) {
    return r.valor + r.id;
}
