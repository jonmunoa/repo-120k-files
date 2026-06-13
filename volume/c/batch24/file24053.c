// fichero 24053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24053;

Registro24053 crear_registro24053(int id) {
    Registro24053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24053(Registro24053 r) {
    return r.valor + r.id;
}
