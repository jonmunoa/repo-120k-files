// fichero 2677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2677;

Registro2677 crear_registro2677(int id) {
    Registro2677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2677(Registro2677 r) {
    return r.valor + r.id;
}
