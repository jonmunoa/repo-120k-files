// fichero 15697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15697;

Registro15697 crear_registro15697(int id) {
    Registro15697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15697(Registro15697 r) {
    return r.valor + r.id;
}
