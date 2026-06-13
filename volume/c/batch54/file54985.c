// fichero 54985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54985;

Registro54985 crear_registro54985(int id) {
    Registro54985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54985(Registro54985 r) {
    return r.valor + r.id;
}
