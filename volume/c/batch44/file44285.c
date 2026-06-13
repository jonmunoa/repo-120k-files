// fichero 44285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44285;

Registro44285 crear_registro44285(int id) {
    Registro44285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44285(Registro44285 r) {
    return r.valor + r.id;
}
