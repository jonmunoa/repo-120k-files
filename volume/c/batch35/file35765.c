// fichero 35765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35765;

Registro35765 crear_registro35765(int id) {
    Registro35765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35765(Registro35765 r) {
    return r.valor + r.id;
}
