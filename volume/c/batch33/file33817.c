// fichero 33817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33817;

Registro33817 crear_registro33817(int id) {
    Registro33817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33817(Registro33817 r) {
    return r.valor + r.id;
}
