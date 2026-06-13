// fichero 25737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25737;

Registro25737 crear_registro25737(int id) {
    Registro25737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25737(Registro25737 r) {
    return r.valor + r.id;
}
