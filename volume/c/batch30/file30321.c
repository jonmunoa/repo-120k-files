// fichero 30321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30321;

Registro30321 crear_registro30321(int id) {
    Registro30321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30321(Registro30321 r) {
    return r.valor + r.id;
}
