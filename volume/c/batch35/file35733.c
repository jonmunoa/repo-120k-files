// fichero 35733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35733;

Registro35733 crear_registro35733(int id) {
    Registro35733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35733(Registro35733 r) {
    return r.valor + r.id;
}
