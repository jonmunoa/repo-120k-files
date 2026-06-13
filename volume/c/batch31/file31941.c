// fichero 31941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31941;

Registro31941 crear_registro31941(int id) {
    Registro31941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31941(Registro31941 r) {
    return r.valor + r.id;
}
