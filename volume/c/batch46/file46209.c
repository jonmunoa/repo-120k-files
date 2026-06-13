// fichero 46209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46209;

Registro46209 crear_registro46209(int id) {
    Registro46209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46209(Registro46209 r) {
    return r.valor + r.id;
}
