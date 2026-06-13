// fichero 40329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40329;

Registro40329 crear_registro40329(int id) {
    Registro40329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40329(Registro40329 r) {
    return r.valor + r.id;
}
