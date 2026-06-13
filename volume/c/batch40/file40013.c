// fichero 40013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40013;

Registro40013 crear_registro40013(int id) {
    Registro40013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40013(Registro40013 r) {
    return r.valor + r.id;
}
