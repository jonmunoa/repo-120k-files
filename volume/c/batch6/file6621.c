// fichero 6621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6621;

Registro6621 crear_registro6621(int id) {
    Registro6621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6621(Registro6621 r) {
    return r.valor + r.id;
}
