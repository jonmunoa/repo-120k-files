// fichero 25225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25225;

Registro25225 crear_registro25225(int id) {
    Registro25225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25225(Registro25225 r) {
    return r.valor + r.id;
}
