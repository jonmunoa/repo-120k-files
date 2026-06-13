// fichero 6429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6429;

Registro6429 crear_registro6429(int id) {
    Registro6429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6429(Registro6429 r) {
    return r.valor + r.id;
}
