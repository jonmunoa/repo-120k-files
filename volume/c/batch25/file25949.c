// fichero 25949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25949;

Registro25949 crear_registro25949(int id) {
    Registro25949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25949(Registro25949 r) {
    return r.valor + r.id;
}
