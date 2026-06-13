// fichero 49557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49557;

Registro49557 crear_registro49557(int id) {
    Registro49557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49557(Registro49557 r) {
    return r.valor + r.id;
}
