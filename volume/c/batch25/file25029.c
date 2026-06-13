// fichero 25029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25029;

Registro25029 crear_registro25029(int id) {
    Registro25029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25029(Registro25029 r) {
    return r.valor + r.id;
}
