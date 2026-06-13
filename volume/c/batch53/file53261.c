// fichero 53261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53261;

Registro53261 crear_registro53261(int id) {
    Registro53261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53261(Registro53261 r) {
    return r.valor + r.id;
}
