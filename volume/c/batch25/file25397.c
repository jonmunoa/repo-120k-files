// fichero 25397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25397;

Registro25397 crear_registro25397(int id) {
    Registro25397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25397(Registro25397 r) {
    return r.valor + r.id;
}
