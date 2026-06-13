// fichero 17189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17189;

Registro17189 crear_registro17189(int id) {
    Registro17189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17189(Registro17189 r) {
    return r.valor + r.id;
}
