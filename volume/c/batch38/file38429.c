// fichero 38429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38429;

Registro38429 crear_registro38429(int id) {
    Registro38429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38429(Registro38429 r) {
    return r.valor + r.id;
}
