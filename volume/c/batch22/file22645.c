// fichero 22645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22645;

Registro22645 crear_registro22645(int id) {
    Registro22645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22645(Registro22645 r) {
    return r.valor + r.id;
}
