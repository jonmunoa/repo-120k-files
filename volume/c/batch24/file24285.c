// fichero 24285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24285;

Registro24285 crear_registro24285(int id) {
    Registro24285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24285(Registro24285 r) {
    return r.valor + r.id;
}
