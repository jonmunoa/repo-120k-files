// fichero 12069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12069;

Registro12069 crear_registro12069(int id) {
    Registro12069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12069(Registro12069 r) {
    return r.valor + r.id;
}
