// fichero 40601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40601;

Registro40601 crear_registro40601(int id) {
    Registro40601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40601(Registro40601 r) {
    return r.valor + r.id;
}
