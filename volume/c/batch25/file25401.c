// fichero 25401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25401;

Registro25401 crear_registro25401(int id) {
    Registro25401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25401(Registro25401 r) {
    return r.valor + r.id;
}
