// fichero 51805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51805;

Registro51805 crear_registro51805(int id) {
    Registro51805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51805(Registro51805 r) {
    return r.valor + r.id;
}
