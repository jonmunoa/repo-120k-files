// fichero 27713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27713;

Registro27713 crear_registro27713(int id) {
    Registro27713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27713(Registro27713 r) {
    return r.valor + r.id;
}
