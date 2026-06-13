// fichero 47889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47889;

Registro47889 crear_registro47889(int id) {
    Registro47889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47889(Registro47889 r) {
    return r.valor + r.id;
}
