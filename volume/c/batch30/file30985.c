// fichero 30985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30985;

Registro30985 crear_registro30985(int id) {
    Registro30985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30985(Registro30985 r) {
    return r.valor + r.id;
}
