// fichero 53741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53741;

Registro53741 crear_registro53741(int id) {
    Registro53741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53741(Registro53741 r) {
    return r.valor + r.id;
}
