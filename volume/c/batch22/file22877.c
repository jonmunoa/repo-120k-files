// fichero 22877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22877;

Registro22877 crear_registro22877(int id) {
    Registro22877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22877(Registro22877 r) {
    return r.valor + r.id;
}
