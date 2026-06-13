// fichero 3733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3733;

Registro3733 crear_registro3733(int id) {
    Registro3733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3733(Registro3733 r) {
    return r.valor + r.id;
}
