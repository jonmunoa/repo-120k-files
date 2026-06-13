// fichero 25917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25917;

Registro25917 crear_registro25917(int id) {
    Registro25917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25917(Registro25917 r) {
    return r.valor + r.id;
}
