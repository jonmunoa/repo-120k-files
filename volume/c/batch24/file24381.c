// fichero 24381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24381;

Registro24381 crear_registro24381(int id) {
    Registro24381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24381(Registro24381 r) {
    return r.valor + r.id;
}
