// fichero 6345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6345;

Registro6345 crear_registro6345(int id) {
    Registro6345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6345(Registro6345 r) {
    return r.valor + r.id;
}
