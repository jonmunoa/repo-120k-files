// fichero 38889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38889;

Registro38889 crear_registro38889(int id) {
    Registro38889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38889(Registro38889 r) {
    return r.valor + r.id;
}
