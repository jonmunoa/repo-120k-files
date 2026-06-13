// fichero 53805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53805;

Registro53805 crear_registro53805(int id) {
    Registro53805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53805(Registro53805 r) {
    return r.valor + r.id;
}
