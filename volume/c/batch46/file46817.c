// fichero 46817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46817;

Registro46817 crear_registro46817(int id) {
    Registro46817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46817(Registro46817 r) {
    return r.valor + r.id;
}
