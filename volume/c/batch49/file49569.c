// fichero 49569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49569;

Registro49569 crear_registro49569(int id) {
    Registro49569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49569(Registro49569 r) {
    return r.valor + r.id;
}
