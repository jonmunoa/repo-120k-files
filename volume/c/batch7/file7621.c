// fichero 7621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7621;

Registro7621 crear_registro7621(int id) {
    Registro7621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7621(Registro7621 r) {
    return r.valor + r.id;
}
