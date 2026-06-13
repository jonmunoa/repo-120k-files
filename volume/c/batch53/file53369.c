// fichero 53369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53369;

Registro53369 crear_registro53369(int id) {
    Registro53369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53369(Registro53369 r) {
    return r.valor + r.id;
}
