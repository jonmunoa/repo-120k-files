// fichero 18621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18621;

Registro18621 crear_registro18621(int id) {
    Registro18621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18621(Registro18621 r) {
    return r.valor + r.id;
}
