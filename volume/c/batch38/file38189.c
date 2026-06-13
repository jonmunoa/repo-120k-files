// fichero 38189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38189;

Registro38189 crear_registro38189(int id) {
    Registro38189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38189(Registro38189 r) {
    return r.valor + r.id;
}
