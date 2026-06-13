// fichero 49713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49713;

Registro49713 crear_registro49713(int id) {
    Registro49713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49713(Registro49713 r) {
    return r.valor + r.id;
}
