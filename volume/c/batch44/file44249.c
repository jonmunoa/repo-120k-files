// fichero 44249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44249;

Registro44249 crear_registro44249(int id) {
    Registro44249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44249(Registro44249 r) {
    return r.valor + r.id;
}
