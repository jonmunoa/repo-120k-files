// fichero 45713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45713;

Registro45713 crear_registro45713(int id) {
    Registro45713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45713(Registro45713 r) {
    return r.valor + r.id;
}
