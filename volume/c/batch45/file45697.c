// fichero 45697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45697;

Registro45697 crear_registro45697(int id) {
    Registro45697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45697(Registro45697 r) {
    return r.valor + r.id;
}
