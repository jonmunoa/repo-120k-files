// fichero 34061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34061;

Registro34061 crear_registro34061(int id) {
    Registro34061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34061(Registro34061 r) {
    return r.valor + r.id;
}
