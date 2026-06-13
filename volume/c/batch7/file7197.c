// fichero 7197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7197;

Registro7197 crear_registro7197(int id) {
    Registro7197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7197(Registro7197 r) {
    return r.valor + r.id;
}
