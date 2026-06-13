// fichero 25229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25229;

Registro25229 crear_registro25229(int id) {
    Registro25229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25229(Registro25229 r) {
    return r.valor + r.id;
}
