// fichero 31341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31341;

Registro31341 crear_registro31341(int id) {
    Registro31341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31341(Registro31341 r) {
    return r.valor + r.id;
}
