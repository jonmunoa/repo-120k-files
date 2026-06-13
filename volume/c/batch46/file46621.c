// fichero 46621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46621;

Registro46621 crear_registro46621(int id) {
    Registro46621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46621(Registro46621 r) {
    return r.valor + r.id;
}
