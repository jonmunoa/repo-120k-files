// fichero 817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro817;

Registro817 crear_registro817(int id) {
    Registro817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro817(Registro817 r) {
    return r.valor + r.id;
}
