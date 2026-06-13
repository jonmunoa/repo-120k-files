// fichero 4309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4309;

Registro4309 crear_registro4309(int id) {
    Registro4309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4309(Registro4309 r) {
    return r.valor + r.id;
}
