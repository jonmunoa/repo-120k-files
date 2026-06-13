// fichero 4829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4829;

Registro4829 crear_registro4829(int id) {
    Registro4829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4829(Registro4829 r) {
    return r.valor + r.id;
}
