// fichero 35013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35013;

Registro35013 crear_registro35013(int id) {
    Registro35013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35013(Registro35013 r) {
    return r.valor + r.id;
}
