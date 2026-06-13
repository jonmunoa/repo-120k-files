// fichero 14985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14985;

Registro14985 crear_registro14985(int id) {
    Registro14985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14985(Registro14985 r) {
    return r.valor + r.id;
}
