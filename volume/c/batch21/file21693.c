// fichero 21693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21693;

Registro21693 crear_registro21693(int id) {
    Registro21693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21693(Registro21693 r) {
    return r.valor + r.id;
}
