// fichero 26713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26713;

Registro26713 crear_registro26713(int id) {
    Registro26713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26713(Registro26713 r) {
    return r.valor + r.id;
}
