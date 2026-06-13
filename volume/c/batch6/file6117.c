// fichero 6117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6117;

Registro6117 crear_registro6117(int id) {
    Registro6117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6117(Registro6117 r) {
    return r.valor + r.id;
}
