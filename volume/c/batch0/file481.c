// fichero 481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro481;

Registro481 crear_registro481(int id) {
    Registro481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro481(Registro481 r) {
    return r.valor + r.id;
}
