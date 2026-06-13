// fichero 40429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40429;

Registro40429 crear_registro40429(int id) {
    Registro40429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40429(Registro40429 r) {
    return r.valor + r.id;
}
