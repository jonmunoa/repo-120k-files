// fichero 40421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40421;

Registro40421 crear_registro40421(int id) {
    Registro40421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40421(Registro40421 r) {
    return r.valor + r.id;
}
