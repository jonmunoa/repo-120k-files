// fichero 25905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25905;

Registro25905 crear_registro25905(int id) {
    Registro25905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25905(Registro25905 r) {
    return r.valor + r.id;
}
