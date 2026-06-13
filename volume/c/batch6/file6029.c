// fichero 6029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6029;

Registro6029 crear_registro6029(int id) {
    Registro6029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6029(Registro6029 r) {
    return r.valor + r.id;
}
