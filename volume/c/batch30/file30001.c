// fichero 30001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30001;

Registro30001 crear_registro30001(int id) {
    Registro30001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30001(Registro30001 r) {
    return r.valor + r.id;
}
