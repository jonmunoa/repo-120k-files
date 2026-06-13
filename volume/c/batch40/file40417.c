// fichero 40417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40417;

Registro40417 crear_registro40417(int id) {
    Registro40417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40417(Registro40417 r) {
    return r.valor + r.id;
}
