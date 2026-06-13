// fichero 21081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21081;

Registro21081 crear_registro21081(int id) {
    Registro21081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21081(Registro21081 r) {
    return r.valor + r.id;
}
