// fichero 45053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45053;

Registro45053 crear_registro45053(int id) {
    Registro45053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45053(Registro45053 r) {
    return r.valor + r.id;
}
