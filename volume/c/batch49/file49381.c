// fichero 49381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49381;

Registro49381 crear_registro49381(int id) {
    Registro49381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49381(Registro49381 r) {
    return r.valor + r.id;
}
