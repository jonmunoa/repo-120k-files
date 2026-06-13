// fichero 21429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21429;

Registro21429 crear_registro21429(int id) {
    Registro21429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21429(Registro21429 r) {
    return r.valor + r.id;
}
