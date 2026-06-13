// fichero 25529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25529;

Registro25529 crear_registro25529(int id) {
    Registro25529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25529(Registro25529 r) {
    return r.valor + r.id;
}
