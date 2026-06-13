// fichero 5817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5817;

Registro5817 crear_registro5817(int id) {
    Registro5817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5817(Registro5817 r) {
    return r.valor + r.id;
}
