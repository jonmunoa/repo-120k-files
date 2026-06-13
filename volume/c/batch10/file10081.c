// fichero 10081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10081;

Registro10081 crear_registro10081(int id) {
    Registro10081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10081(Registro10081 r) {
    return r.valor + r.id;
}
