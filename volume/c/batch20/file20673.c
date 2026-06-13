// fichero 20673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20673;

Registro20673 crear_registro20673(int id) {
    Registro20673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20673(Registro20673 r) {
    return r.valor + r.id;
}
