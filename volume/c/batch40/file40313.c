// fichero 40313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40313;

Registro40313 crear_registro40313(int id) {
    Registro40313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40313(Registro40313 r) {
    return r.valor + r.id;
}
