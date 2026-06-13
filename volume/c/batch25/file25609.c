// fichero 25609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25609;

Registro25609 crear_registro25609(int id) {
    Registro25609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25609(Registro25609 r) {
    return r.valor + r.id;
}
