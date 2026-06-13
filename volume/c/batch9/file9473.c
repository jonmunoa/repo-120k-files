// fichero 9473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9473;

Registro9473 crear_registro9473(int id) {
    Registro9473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9473(Registro9473 r) {
    return r.valor + r.id;
}
