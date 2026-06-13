// fichero 30193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30193;

Registro30193 crear_registro30193(int id) {
    Registro30193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30193(Registro30193 r) {
    return r.valor + r.id;
}
