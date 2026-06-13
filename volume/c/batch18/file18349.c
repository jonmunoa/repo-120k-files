// fichero 18349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18349;

Registro18349 crear_registro18349(int id) {
    Registro18349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18349(Registro18349 r) {
    return r.valor + r.id;
}
