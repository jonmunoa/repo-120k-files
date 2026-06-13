// fichero 25149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25149;

Registro25149 crear_registro25149(int id) {
    Registro25149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25149(Registro25149 r) {
    return r.valor + r.id;
}
