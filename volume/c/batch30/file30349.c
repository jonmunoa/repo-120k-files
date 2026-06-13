// fichero 30349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30349;

Registro30349 crear_registro30349(int id) {
    Registro30349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30349(Registro30349 r) {
    return r.valor + r.id;
}
