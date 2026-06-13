// fichero 50665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50665;

Registro50665 crear_registro50665(int id) {
    Registro50665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50665(Registro50665 r) {
    return r.valor + r.id;
}
