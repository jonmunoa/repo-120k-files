// fichero 35757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35757;

Registro35757 crear_registro35757(int id) {
    Registro35757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35757(Registro35757 r) {
    return r.valor + r.id;
}
