// fichero 44985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44985;

Registro44985 crear_registro44985(int id) {
    Registro44985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44985(Registro44985 r) {
    return r.valor + r.id;
}
