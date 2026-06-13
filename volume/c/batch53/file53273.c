// fichero 53273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53273;

Registro53273 crear_registro53273(int id) {
    Registro53273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53273(Registro53273 r) {
    return r.valor + r.id;
}
