// fichero 44629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44629;

Registro44629 crear_registro44629(int id) {
    Registro44629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44629(Registro44629 r) {
    return r.valor + r.id;
}
