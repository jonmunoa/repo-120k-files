// fichero 581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro581;

Registro581 crear_registro581(int id) {
    Registro581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro581(Registro581 r) {
    return r.valor + r.id;
}
