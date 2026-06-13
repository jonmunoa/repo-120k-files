// fichero 40969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40969;

Registro40969 crear_registro40969(int id) {
    Registro40969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40969(Registro40969 r) {
    return r.valor + r.id;
}
