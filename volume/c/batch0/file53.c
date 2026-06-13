// fichero 53 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53;

Registro53 crear_registro53(int id) {
    Registro53 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53(Registro53 r) {
    return r.valor + r.id;
}
