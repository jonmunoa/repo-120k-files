// fichero 30621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30621;

Registro30621 crear_registro30621(int id) {
    Registro30621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30621(Registro30621 r) {
    return r.valor + r.id;
}
