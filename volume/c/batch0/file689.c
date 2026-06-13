// fichero 689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro689;

Registro689 crear_registro689(int id) {
    Registro689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro689(Registro689 r) {
    return r.valor + r.id;
}
