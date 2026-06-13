// fichero 25417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25417;

Registro25417 crear_registro25417(int id) {
    Registro25417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25417(Registro25417 r) {
    return r.valor + r.id;
}
