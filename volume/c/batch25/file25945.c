// fichero 25945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25945;

Registro25945 crear_registro25945(int id) {
    Registro25945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25945(Registro25945 r) {
    return r.valor + r.id;
}
