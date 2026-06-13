// fichero 49121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49121;

Registro49121 crear_registro49121(int id) {
    Registro49121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49121(Registro49121 r) {
    return r.valor + r.id;
}
