// fichero 25513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25513;

Registro25513 crear_registro25513(int id) {
    Registro25513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25513(Registro25513 r) {
    return r.valor + r.id;
}
