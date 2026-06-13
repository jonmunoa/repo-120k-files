// fichero 25241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25241;

Registro25241 crear_registro25241(int id) {
    Registro25241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25241(Registro25241 r) {
    return r.valor + r.id;
}
