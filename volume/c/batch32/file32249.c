// fichero 32249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32249;

Registro32249 crear_registro32249(int id) {
    Registro32249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32249(Registro32249 r) {
    return r.valor + r.id;
}
