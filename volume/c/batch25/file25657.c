// fichero 25657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25657;

Registro25657 crear_registro25657(int id) {
    Registro25657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25657(Registro25657 r) {
    return r.valor + r.id;
}
