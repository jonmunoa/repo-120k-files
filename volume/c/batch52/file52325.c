// fichero 52325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52325;

Registro52325 crear_registro52325(int id) {
    Registro52325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52325(Registro52325 r) {
    return r.valor + r.id;
}
