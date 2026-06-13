// fichero 53101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53101;

Registro53101 crear_registro53101(int id) {
    Registro53101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53101(Registro53101 r) {
    return r.valor + r.id;
}
