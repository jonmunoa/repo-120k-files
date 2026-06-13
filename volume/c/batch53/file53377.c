// fichero 53377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53377;

Registro53377 crear_registro53377(int id) {
    Registro53377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53377(Registro53377 r) {
    return r.valor + r.id;
}
