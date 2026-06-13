// fichero 3889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3889;

Registro3889 crear_registro3889(int id) {
    Registro3889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3889(Registro3889 r) {
    return r.valor + r.id;
}
