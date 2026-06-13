// fichero 25577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25577;

Registro25577 crear_registro25577(int id) {
    Registro25577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25577(Registro25577 r) {
    return r.valor + r.id;
}
