// fichero 25697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25697;

Registro25697 crear_registro25697(int id) {
    Registro25697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25697(Registro25697 r) {
    return r.valor + r.id;
}
