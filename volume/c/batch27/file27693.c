// fichero 27693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27693;

Registro27693 crear_registro27693(int id) {
    Registro27693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27693(Registro27693 r) {
    return r.valor + r.id;
}
