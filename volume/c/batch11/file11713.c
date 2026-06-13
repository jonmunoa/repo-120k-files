// fichero 11713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11713;

Registro11713 crear_registro11713(int id) {
    Registro11713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11713(Registro11713 r) {
    return r.valor + r.id;
}
