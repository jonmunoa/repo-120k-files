// fichero 741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro741;

Registro741 crear_registro741(int id) {
    Registro741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro741(Registro741 r) {
    return r.valor + r.id;
}
