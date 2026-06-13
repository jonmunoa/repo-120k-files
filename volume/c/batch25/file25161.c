// fichero 25161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25161;

Registro25161 crear_registro25161(int id) {
    Registro25161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25161(Registro25161 r) {
    return r.valor + r.id;
}
