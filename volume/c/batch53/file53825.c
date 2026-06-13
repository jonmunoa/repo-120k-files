// fichero 53825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53825;

Registro53825 crear_registro53825(int id) {
    Registro53825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53825(Registro53825 r) {
    return r.valor + r.id;
}
