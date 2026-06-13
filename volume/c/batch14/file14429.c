// fichero 14429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14429;

Registro14429 crear_registro14429(int id) {
    Registro14429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14429(Registro14429 r) {
    return r.valor + r.id;
}
