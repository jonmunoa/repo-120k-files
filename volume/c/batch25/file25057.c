// fichero 25057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25057;

Registro25057 crear_registro25057(int id) {
    Registro25057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25057(Registro25057 r) {
    return r.valor + r.id;
}
