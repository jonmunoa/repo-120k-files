// fichero 25437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25437;

Registro25437 crear_registro25437(int id) {
    Registro25437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25437(Registro25437 r) {
    return r.valor + r.id;
}
