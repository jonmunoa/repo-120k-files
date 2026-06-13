// fichero 45617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45617;

Registro45617 crear_registro45617(int id) {
    Registro45617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45617(Registro45617 r) {
    return r.valor + r.id;
}
