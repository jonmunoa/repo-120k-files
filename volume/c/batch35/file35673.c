// fichero 35673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35673;

Registro35673 crear_registro35673(int id) {
    Registro35673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35673(Registro35673 r) {
    return r.valor + r.id;
}
