// fichero 7985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7985;

Registro7985 crear_registro7985(int id) {
    Registro7985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7985(Registro7985 r) {
    return r.valor + r.id;
}
