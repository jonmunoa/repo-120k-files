// fichero 25873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25873;

Registro25873 crear_registro25873(int id) {
    Registro25873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25873(Registro25873 r) {
    return r.valor + r.id;
}
