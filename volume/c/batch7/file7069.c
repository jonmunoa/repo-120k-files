// fichero 7069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7069;

Registro7069 crear_registro7069(int id) {
    Registro7069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7069(Registro7069 r) {
    return r.valor + r.id;
}
