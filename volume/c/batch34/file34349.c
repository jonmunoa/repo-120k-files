// fichero 34349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34349;

Registro34349 crear_registro34349(int id) {
    Registro34349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34349(Registro34349 r) {
    return r.valor + r.id;
}
