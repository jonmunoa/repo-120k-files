// fichero 25853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25853;

Registro25853 crear_registro25853(int id) {
    Registro25853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25853(Registro25853 r) {
    return r.valor + r.id;
}
