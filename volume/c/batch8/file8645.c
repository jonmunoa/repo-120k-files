// fichero 8645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8645;

Registro8645 crear_registro8645(int id) {
    Registro8645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8645(Registro8645 r) {
    return r.valor + r.id;
}
