// fichero 25469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25469;

Registro25469 crear_registro25469(int id) {
    Registro25469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25469(Registro25469 r) {
    return r.valor + r.id;
}
