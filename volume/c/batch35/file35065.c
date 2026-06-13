// fichero 35065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35065;

Registro35065 crear_registro35065(int id) {
    Registro35065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35065(Registro35065 r) {
    return r.valor + r.id;
}
