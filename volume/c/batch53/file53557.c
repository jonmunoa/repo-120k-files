// fichero 53557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53557;

Registro53557 crear_registro53557(int id) {
    Registro53557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53557(Registro53557 r) {
    return r.valor + r.id;
}
