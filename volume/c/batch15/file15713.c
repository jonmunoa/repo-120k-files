// fichero 15713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15713;

Registro15713 crear_registro15713(int id) {
    Registro15713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15713(Registro15713 r) {
    return r.valor + r.id;
}
