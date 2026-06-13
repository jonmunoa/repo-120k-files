// fichero 21713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21713;

Registro21713 crear_registro21713(int id) {
    Registro21713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21713(Registro21713 r) {
    return r.valor + r.id;
}
