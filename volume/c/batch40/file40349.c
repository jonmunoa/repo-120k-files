// fichero 40349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40349;

Registro40349 crear_registro40349(int id) {
    Registro40349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40349(Registro40349 r) {
    return r.valor + r.id;
}
