// fichero 22693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22693;

Registro22693 crear_registro22693(int id) {
    Registro22693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22693(Registro22693 r) {
    return r.valor + r.id;
}
