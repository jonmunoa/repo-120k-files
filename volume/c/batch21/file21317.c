// fichero 21317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21317;

Registro21317 crear_registro21317(int id) {
    Registro21317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21317(Registro21317 r) {
    return r.valor + r.id;
}
