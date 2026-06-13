// fichero 4429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4429;

Registro4429 crear_registro4429(int id) {
    Registro4429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4429(Registro4429 r) {
    return r.valor + r.id;
}
