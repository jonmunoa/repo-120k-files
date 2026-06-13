// fichero 44969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44969;

Registro44969 crear_registro44969(int id) {
    Registro44969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44969(Registro44969 r) {
    return r.valor + r.id;
}
