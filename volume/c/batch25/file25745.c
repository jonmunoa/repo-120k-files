// fichero 25745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25745;

Registro25745 crear_registro25745(int id) {
    Registro25745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25745(Registro25745 r) {
    return r.valor + r.id;
}
