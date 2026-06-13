// fichero 25913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25913;

Registro25913 crear_registro25913(int id) {
    Registro25913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25913(Registro25913 r) {
    return r.valor + r.id;
}
