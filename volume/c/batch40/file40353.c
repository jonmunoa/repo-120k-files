// fichero 40353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40353;

Registro40353 crear_registro40353(int id) {
    Registro40353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40353(Registro40353 r) {
    return r.valor + r.id;
}
