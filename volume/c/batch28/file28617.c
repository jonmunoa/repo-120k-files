// fichero 28617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28617;

Registro28617 crear_registro28617(int id) {
    Registro28617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28617(Registro28617 r) {
    return r.valor + r.id;
}
