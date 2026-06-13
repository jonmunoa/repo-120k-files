// fichero 38397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38397;

Registro38397 crear_registro38397(int id) {
    Registro38397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38397(Registro38397 r) {
    return r.valor + r.id;
}
