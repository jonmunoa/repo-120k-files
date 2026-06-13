// fichero 30069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30069;

Registro30069 crear_registro30069(int id) {
    Registro30069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30069(Registro30069 r) {
    return r.valor + r.id;
}
