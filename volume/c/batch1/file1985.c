// fichero 1985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1985;

Registro1985 crear_registro1985(int id) {
    Registro1985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1985(Registro1985 r) {
    return r.valor + r.id;
}
