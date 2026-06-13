// fichero 35373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35373;

Registro35373 crear_registro35373(int id) {
    Registro35373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35373(Registro35373 r) {
    return r.valor + r.id;
}
