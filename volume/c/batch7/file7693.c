// fichero 7693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7693;

Registro7693 crear_registro7693(int id) {
    Registro7693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7693(Registro7693 r) {
    return r.valor + r.id;
}
