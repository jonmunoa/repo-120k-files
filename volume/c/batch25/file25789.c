// fichero 25789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25789;

Registro25789 crear_registro25789(int id) {
    Registro25789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25789(Registro25789 r) {
    return r.valor + r.id;
}
