// fichero 25849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25849;

Registro25849 crear_registro25849(int id) {
    Registro25849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25849(Registro25849 r) {
    return r.valor + r.id;
}
