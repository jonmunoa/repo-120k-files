// fichero 25821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25821;

Registro25821 crear_registro25821(int id) {
    Registro25821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25821(Registro25821 r) {
    return r.valor + r.id;
}
