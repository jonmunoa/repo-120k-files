// fichero 22193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22193;

Registro22193 crear_registro22193(int id) {
    Registro22193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22193(Registro22193 r) {
    return r.valor + r.id;
}
