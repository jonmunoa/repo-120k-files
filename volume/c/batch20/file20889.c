// fichero 20889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20889;

Registro20889 crear_registro20889(int id) {
    Registro20889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20889(Registro20889 r) {
    return r.valor + r.id;
}
