// fichero 52193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52193;

Registro52193 crear_registro52193(int id) {
    Registro52193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52193(Registro52193 r) {
    return r.valor + r.id;
}
