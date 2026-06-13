// fichero 25117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25117;

Registro25117 crear_registro25117(int id) {
    Registro25117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25117(Registro25117 r) {
    return r.valor + r.id;
}
