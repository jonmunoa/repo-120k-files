// fichero 27581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27581;

Registro27581 crear_registro27581(int id) {
    Registro27581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27581(Registro27581 r) {
    return r.valor + r.id;
}
