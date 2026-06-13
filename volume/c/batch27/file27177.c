// fichero 27177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27177;

Registro27177 crear_registro27177(int id) {
    Registro27177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27177(Registro27177 r) {
    return r.valor + r.id;
}
