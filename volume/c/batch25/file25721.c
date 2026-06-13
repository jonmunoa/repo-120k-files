// fichero 25721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25721;

Registro25721 crear_registro25721(int id) {
    Registro25721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25721(Registro25721 r) {
    return r.valor + r.id;
}
