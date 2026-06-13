// fichero 41249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41249;

Registro41249 crear_registro41249(int id) {
    Registro41249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41249(Registro41249 r) {
    return r.valor + r.id;
}
