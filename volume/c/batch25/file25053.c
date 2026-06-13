// fichero 25053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25053;

Registro25053 crear_registro25053(int id) {
    Registro25053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25053(Registro25053 r) {
    return r.valor + r.id;
}
