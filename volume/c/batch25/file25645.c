// fichero 25645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25645;

Registro25645 crear_registro25645(int id) {
    Registro25645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25645(Registro25645 r) {
    return r.valor + r.id;
}
