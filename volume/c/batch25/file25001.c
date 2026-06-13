// fichero 25001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25001;

Registro25001 crear_registro25001(int id) {
    Registro25001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25001(Registro25001 r) {
    return r.valor + r.id;
}
