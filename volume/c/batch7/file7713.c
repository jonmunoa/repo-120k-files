// fichero 7713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7713;

Registro7713 crear_registro7713(int id) {
    Registro7713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7713(Registro7713 r) {
    return r.valor + r.id;
}
