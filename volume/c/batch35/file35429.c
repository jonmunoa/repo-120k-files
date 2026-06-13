// fichero 35429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35429;

Registro35429 crear_registro35429(int id) {
    Registro35429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35429(Registro35429 r) {
    return r.valor + r.id;
}
