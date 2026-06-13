// fichero 49621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49621;

Registro49621 crear_registro49621(int id) {
    Registro49621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49621(Registro49621 r) {
    return r.valor + r.id;
}
