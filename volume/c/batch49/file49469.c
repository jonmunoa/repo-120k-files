// fichero 49469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49469;

Registro49469 crear_registro49469(int id) {
    Registro49469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49469(Registro49469 r) {
    return r.valor + r.id;
}
