// fichero 40705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40705;

Registro40705 crear_registro40705(int id) {
    Registro40705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40705(Registro40705 r) {
    return r.valor + r.id;
}
