// fichero 53857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53857;

Registro53857 crear_registro53857(int id) {
    Registro53857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53857(Registro53857 r) {
    return r.valor + r.id;
}
