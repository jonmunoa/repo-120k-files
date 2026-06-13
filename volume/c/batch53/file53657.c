// fichero 53657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53657;

Registro53657 crear_registro53657(int id) {
    Registro53657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53657(Registro53657 r) {
    return r.valor + r.id;
}
