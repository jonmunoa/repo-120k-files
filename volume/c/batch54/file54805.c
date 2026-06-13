// fichero 54805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54805;

Registro54805 crear_registro54805(int id) {
    Registro54805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54805(Registro54805 r) {
    return r.valor + r.id;
}
