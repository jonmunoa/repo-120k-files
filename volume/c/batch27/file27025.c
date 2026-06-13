// fichero 27025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27025;

Registro27025 crear_registro27025(int id) {
    Registro27025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27025(Registro27025 r) {
    return r.valor + r.id;
}
