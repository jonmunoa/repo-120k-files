// fichero 40833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40833;

Registro40833 crear_registro40833(int id) {
    Registro40833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40833(Registro40833 r) {
    return r.valor + r.id;
}
