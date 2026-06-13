// fichero 31693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31693;

Registro31693 crear_registro31693(int id) {
    Registro31693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31693(Registro31693 r) {
    return r.valor + r.id;
}
