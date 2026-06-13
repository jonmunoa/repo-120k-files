// fichero 21053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21053;

Registro21053 crear_registro21053(int id) {
    Registro21053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21053(Registro21053 r) {
    return r.valor + r.id;
}
