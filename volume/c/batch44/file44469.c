// fichero 44469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44469;

Registro44469 crear_registro44469(int id) {
    Registro44469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44469(Registro44469 r) {
    return r.valor + r.id;
}
