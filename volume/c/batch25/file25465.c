// fichero 25465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25465;

Registro25465 crear_registro25465(int id) {
    Registro25465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25465(Registro25465 r) {
    return r.valor + r.id;
}
