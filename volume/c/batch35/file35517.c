// fichero 35517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35517;

Registro35517 crear_registro35517(int id) {
    Registro35517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35517(Registro35517 r) {
    return r.valor + r.id;
}
