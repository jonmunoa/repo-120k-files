// fichero 8137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8137;

Registro8137 crear_registro8137(int id) {
    Registro8137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8137(Registro8137 r) {
    return r.valor + r.id;
}
