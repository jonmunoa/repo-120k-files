// fichero 44213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44213;

Registro44213 crear_registro44213(int id) {
    Registro44213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44213(Registro44213 r) {
    return r.valor + r.id;
}
