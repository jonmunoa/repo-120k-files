// fichero 41349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41349;

Registro41349 crear_registro41349(int id) {
    Registro41349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41349(Registro41349 r) {
    return r.valor + r.id;
}
