// fichero 21193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21193;

Registro21193 crear_registro21193(int id) {
    Registro21193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21193(Registro21193 r) {
    return r.valor + r.id;
}
