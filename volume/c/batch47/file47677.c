// fichero 47677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47677;

Registro47677 crear_registro47677(int id) {
    Registro47677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47677(Registro47677 r) {
    return r.valor + r.id;
}
