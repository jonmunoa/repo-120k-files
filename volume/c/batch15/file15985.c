// fichero 15985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15985;

Registro15985 crear_registro15985(int id) {
    Registro15985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15985(Registro15985 r) {
    return r.valor + r.id;
}
