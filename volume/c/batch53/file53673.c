// fichero 53673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53673;

Registro53673 crear_registro53673(int id) {
    Registro53673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53673(Registro53673 r) {
    return r.valor + r.id;
}
